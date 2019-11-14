import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ Ex28.cpp -o Ex28.x")
a = os.system("./Ex28.x > Ex28.dat")

plt.figure()
data = np.loadtxt("Ex28.dat")
tes=data[:,0]
t=tes[0:20]
dat=data[:,1]
uno=dat[0:20]
dos=dat[20:]
plt.plot(uno,dos)
plt.xlabel('x')
plt.ylabel('y')
plt.savefig("tiro.png")