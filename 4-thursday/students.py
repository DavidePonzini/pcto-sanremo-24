import random
import numpy as np
import pandas as pd
import random

# Genero una lista di 200 nomi e cognomi casuali in formato Python
nomi = ["Emma", "Luca", "Sofia", "Matteo", "Aurora", "Alessandro", "Giulia", "Davide", "Alice", "Lorenzo",
        "Greta", "Marco", "Martina", "Andrea", "Beatrice", "Federico", "Chiara", "Antonio", "Sara", "Simone",
        "Anna", "Gabriele", "Elena", "Francesco", "Arianna", "Giorgio", "Noemi", "Pietro", "Viola", "Tommaso",
        "Giorgia", "Filippo", "Ludovica", "Stefano", "Rebecca", "Giovanni", "Elisa", "Christian", "Francesca", "Mattia",
        "Camilla", "Riccardo", "Alice", "Gabriele", "Marta", "Alessio", "Chiara", "Marco", "Eleonora", "Francesco",
        "Isabella", "Leonardo", "Gaia", "Giacomo", "Caterina", "Samuele", "Arianna", "Giovanni", "Viola", "Edoardo",
        "Giorgia", "Nicola", "Mia", "Michele", "Ginevra", "Alberto", "Giulia", "Fabio", "Cecilia", "Daniele",
        "Vittoria", "Simone", "Martina", "Lorenzo", "Elisa", "Stefano", "Sofia", "Matteo", "Emma", "Federico",
        "Aurora", "Alessandro", "Chiara", "Antonio", "Sara", "Gabriele", "Anna", "Giorgio", "Elena", "Pietro",
        "Alice", "Riccardo", "Giulia", "Luca", "Beatrice", "Marco", "Greta", "Davide", "Martina", "Andrea",
        "Camilla", "Francesco", "Alice", "Mattia", "Francesca", "Christian", "Alessio", "Marta", "Gabriele", "Chiara"]

cognomi = ["Rossi", "Bianchi", "Ferrari", "Russo", "Esposito", "Romano", "Colombo", "Ricci", "Marino", "Greco",
           "Bruno", "Galli", "Conti", "Giordano", "Rizzo", "Moretti", "Costa", "Mancini", "Barone", "Santoro",
           "Serra", "Martini", "Lombardi", "Sanna", "Vitale", "Coppola", "Grassi", "Bianco", "Parisi", "Villa",
           "Monti", "Ferraro", "Marini", "Bellini", "Caruso", "Leone", "Martino", "Rinaldi", "Bruno", "Giuliani",
           "Morelli", "Testa", "Barbieri", "Rossetti", "Sartori", "Russo", "Ferrari", "De Luca", "Benedetti", "Romano",
           "Rinaldi", "Conti", "Monti", "Galli", "Ferraro", "Martini", "Villa", "Esposito", "Bianco", "Giuliani",
           "Rizzo", "Marino", "Serra", "Leone", "Mancini", "Parisi", "Costa", "Bellini", "Barone", "Moretti",
           "Coppola", "Grassi", "Santoro", "Rossetti", "Russo", "De Luca", "Benedetti", "Sartori", "Barbieri", "Testa",
           "Bianchi", "Morelli", "Rossi", "Marini", "Caruso", "Giordano", "Bruno", "Greco", "Colombo", "Ricci",
           "Martino", "Rinaldi", "Conti", "Monti", "Galli", "Ferraro", "Martini", "Villa", "Esposito", "Bianco"]

# Unisco i nomi e cognomi in modo casuale per creare una lista di 200 nomi completi
import random


# Given lists of names and subjects
names = ['{} {}'.format(nomi[random.randrange(0, len(nomi))], cognomi[random.randrange(0, len(cognomi))]) for _ in range(200)]
subjects = ["Italiano", "Storia", "Geografia", "Inglese", "Francese", "Matematica", "Scienze"]

# Create an empty DataFrame with columns for names and subjects
df = pd.DataFrame(columns=["Name"] + subjects)

# Generate random values for each name and their subjects
for name in names:
    a = random.uniform(4, 10)  # Generate a random float between 4 and 10 for 'a'
    
    # Generate random values for subjects using a Gaussian distribution with mean 'a'
    scores = [max(2, min(round(np.random.normal(loc=a), 1), 10)) for _ in subjects]
    
    # Append the name and scores to the DataFrame
    df = df.append({"Name": name, **dict(zip(subjects, scores))}, ignore_index=True)

# Export the DataFrame to a CSV file
df.to_csv('students.csv', index=False)