OUT=out

run: compile
	./$(OUT)

compile:
	g++ *.cpp -o $(OUT)

clean:
	rm -f $(OUT)