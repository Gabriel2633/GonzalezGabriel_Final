import numpy as np 
import matplotlib.pyplot as plt
import pandas as pd



def mh(N=6):
    l = [np.random.random()]
    for i in range(1,N):
        propuesta  = lista[i-1] + np.random.normal()
        
        
        r = min(1,f(propuesta)/f(lista[i-1]))
        
        
        alpha = np.random.random()
        if(alpha<r):
            l.append(propuesta)
        else:
            l.append(lista[i-1])
            
    return l



