import numpy as np
from scipy.linalg import lu_factor, lu_solve

A = np.array([
    [1.3174, 2.7250, 2.7250, 1.7181],
    [0.4002, 0.8278, 1.2272, 2.5322],
    [0.8218, 1.5608, 0.3629, 2.9210],
    [1.9664, 2.0011, 0.6532, 1.9945]
])
b = np.array([8.4855, 4.9874, 5.6665, 6.6152])

lu, piv = lu_factor(A)
x = lu_solve((lu, piv), b)
print(x)
