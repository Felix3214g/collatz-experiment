import csv 
import matplotlib.pyplot as plt



def plot_collatz_results():

    starts = []
    steps = []


    with open("collatz_results.csv", "r") as file:
            reader = csv.DictReader(file)

            for row in reader:
                starts.append(int(row["start"]))
                steps.append(int(row["steps"]))

    plt.scatter(starts, steps, s=2)
    plt.xlabel("Starting Number")
    plt.ylabel("Steps to Reach 1")
    plt.title("Collatz Conjecture stopping time")
    

    plt.scatter(starts[:1000], steps[:1000], s=5)
    plt.xlabel("Starting Number")
    plt.ylabel("Steps to Reach 1")
    plt.title("Collatz stopping time 1-1000")
    plt.show()

    

plot_collatz_results()