OUT=out


all: run clean

run: compile
	./$(OUT)

compile:
	g++ *.cpp -o $(OUT)

clean:
	rm -f $(OUT)

dataset:
	python3 ./students.py