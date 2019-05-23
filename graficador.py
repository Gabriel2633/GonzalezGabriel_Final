import numpy as np 
import matplotlib.pyplot as plt
import os


os.system("g++ final2019.cpp")
os.system("./a.out")

kuta = np.loadtxt("datos.dat")
    
plt.figure(figsize=(10,5))
plt.plot(kuta[:,0],kuta[:,1])
plt.savefig("graficas.png")
