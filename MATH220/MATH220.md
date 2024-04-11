# MATH 220 LINEAR ALGEBRA TABLE OF CONTENTS
[WEEK 1: Solving Systems of Equations]
- What is a Linear System
- Matrices
- Elementary Row Operations
- Solving a System of Equations with Row Operations
- Echelon and Reduced Echelon Form
- Pivots
- Gauss-Jordan Elimination
- Interpolating Polynominals
- Inconsistent Systems
- Consistent Systems with Unique and Infinite Solutions

[WEEK 2: Vectors, Span and Linear Independence]
- Vectors and Vector Addition
- Scalar Multiplication of Vectors and Properties
- Linear Combinations and Vector Equations
- Span
- Linear Independence
- Pivot Test for Linear Independence/Dependence

[WEEK 3: Basis, Matrix-Vector Products and Population Modeling]
- Basis for the subspaces of $R^n$
- Using Basis/Pivots to Describe a Span
- Defining a Basis
- The Matrix Vector Product
- Properties of the Matrix Vector Product
- The Matrix Equation
- Linear Population Model
- Linear Difference Equations
- Setting up a Population Transistion Matrix

[WEEK 4: Column and Null Space, Rank and Nullity, Homogeneous vs. Non Homogeneous]



[WEEK 5: Linear Transformations]


[WEEK 6: Matrix Multiplication and other Matrix Operations]


[WEEK 7: Inverse Matrices]



[WEEK 8: Determinants]


[WEEK 9: Eigenvectors, Length and Projections]


[WEEK 10: Orthonormal Basis, Eigenbasis, Long Term Behavior of Population Matrices and Projection onto Subspaces]




[WEEK 11: Least Squares Approximation, QR factorization and Diagonalizable Matrices]





# Week 11 Least Squares Approximation, QR factorization and Diagonalizable Matrices

## - Introduction to Least Squares Approximation

Consider the three points in the plane: $(1,0), (2,1)$ and $(3,3)$ Setup and solve a linear system of equations $A\vec{x}=\vec{b}$ Determine if there is a line 
$y=mx+b$ that passes through all data points.

$(1,0)$: $y=0,x=1$ so, $0=1m+b$

$(2,1)$: $1=2m+b$

$(3,3)$: $3=3m+b$

Put into an augmented matrix:

$$\begin{bmatrix} 1 & 1 & 0 \\\ 2 & 1 & 1 \\\ 3 & 1 & 3 \end{bmatrix}$$

Reduce to RREF:

$$\begin{bmatrix} 1 & 1 & 0 \\\ 0 & -1 & 1 \\\ 0 & 0 & 5 \end{bmatrix}$$

This is an inconsistent system with no solution.  Meaning no line passes through all three of these points.

Inconsistent systems arise often in these applications.  When a solution is demanded and none exists, the best one can do is

find an $\vec{x}$ that makes $A\vec{x}$ as close as possible to $\vec{b}$

that is we want to find an $\vec{x}$ that minimizes the distance between $A\vec{x}$ and $\vec{b}$

If $A$ is an $m$ x $n$ matrix and $\vec{b}$ is in $R^m$, the least squares solution of 

$A\vec{x}=\vec{x}$ is a vector $\hat{x}$ in $R^n$ such that:

$||\vec{b}-A\hat{x}|| \le ||\vec{b}-A\vec{x}||$, for any $\vec{x}$ in $R^n$.

The quantity $||\vec{b}-A\hat{x}||$ is called the least-squares error.  Error would be 0 if there was actually a solution.

## - Solution to General Least Squares Problem

Find any $\hat{x}$ in $R^n$, the vector $A\vec{x}$ is in the column space of $A$.  We need to find an $\hat{x}$ that makes $A\hat{x}$ the closest pint in $Col(A)$ to $\vec{b}$.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/11fafe33-ca59-4e33-842f-5d9c4e70054b)

## - The Normal Equations

The least squares solution to $\hat{x}$ of $A\vec{x}=\vec{b}$ satifies the equation:

$A^TA\vec{x}=A^T \vec{b}$

This system of equations is called the normal equations for $A\vec{x}=\vec{b}$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/cd871ff3-221c-4ce9-b893-08389bd7c77b)

## - Least Squares Example

Find a least-squares solution to the linear system:

$$A=\begin{bmatrix} 1 & 1 \\\ 1 & 2 \\\ 1 & 3 \end{bmatrix},\vec{x}=\begin{bmatrix} 0 \\\ 1 \\\ 3 \end{bmatrix}$$

Use: $A^TA\vec{x}=A^T \vec{b}$

$$A^TA=\begin{bmatrix}1 & 1 & 1 \\\ 1 & 2 & 3 \end{bmatrix}\begin{bmatrix} 1 & 1 \\\ 1 & 2 \\\ 1 & 3 \end{bmatrix}=\begin{bmatrix} 3 & 6 \\\ 6 & 14 \end{bmatrix}$$

$$A^T\vec{b}=\begin{bmatrix}1 & 1 & 1 \\\ 1 & 2 & 3 \end{bmatrix}\begin{bmatrix} 0 \\\ 1 \\\ 3 \end{bmatrix}=\begin{bmatrix} 4 \\\ 11 \end{bmatrix}$$

Put into an augmented matrix:

$$\begin{bmatrix}3 & 6 & 4 \\\ 6 & 14 & 11 \end{bmatrix}$$

Solve:

$$\begin{bmatrix}1 & 0 & -5/3 \\\ 0 & 1 & 3/2 \end{bmatrix}$$

In this case b is corresponding to the first column and m the second column.  Therefore, $b=-5/3$ and $m=3/2$

This is the solution to the least-squares now to find the line that comes closest to the original data points by inputting these values into &y=mx+b$

so, $y=3/2x-5/3$

## - Orthogonal Matrices

Suppose the columns of a matrix $Q$ is an orthonormal set.

$$Q = 
 \begin{pmatrix}
  q_{1} & q_{2} & \cdots & q_{n} \\
  \vdots  & \vdots  & \vdots & \vdots  \\
\end{pmatrix}$$

$\vec{q_{i}} * \vec{q_{j}} = 0$ if $i\neq{j}$

$$Q^TQ=\begin{bmatrix}
  \vec{q_{1}} \\
  \vdots \\
  \vec{q_{n}} \end{bmatrix}
  \begin{bmatrix} 
  \vec{q_{1}} & \cdots & \vec{q_{1}}
  \end{bmatrix}$$

  $$=\begin{bmatrix} \vec{q_{1, 1}} & \vec{q_{1, 2}} & \cdots & \vec{q_{1, n}} \\
      \vec{q_{2, 1}} & \cdots & \cdots & \vec{q_{2, n}} \\
      \vdots & \vdots & \vdots & \vdots \\
      \vec{q_{n}}\vec{q_{1}} & \cdots & \cdots & \vec{q_{n}}\vec{q_{n}} 
      \end{bmatrix}$$

$\vec{q_{i}}*\vec{q_{i}}=||\vec{q_{i}}||^2=1$ This is because an orthonormal set and all vectors have unit length.

This gives all 1's on the diagonal and 0's everywere else.

## - Orthogonal Matrices

A square matrix $Q$ is said to be an orthogonal matrix if the columns form an orthonormal set.

An equivalent formulation is that $Q$ satisfies:

$Q^T=Q^-1$     or     $QQ^T=Q^TQ=I_{n}$

If they are the same it can be implied that $Q$ is an orthogonal matrix.

- **Rotation matrix example:**

For any $\theta$, let:

$$Q=\begin{bmatrix} cos(\theta) & -sin(\theta) \\
  sin(\theta) & cos(\theta) \end{bmatrix}$$

You can take the dot product of the two columns with each other to show it is equal to 0:

$cos(\theta)*(-sin(\theta))+sin(\theta)*cos(\theta)=0$ so columns are orthogonal

You can take the length of both column vectors:

$$\begin{matrix} || cos(\theta)||^2 \\
  ||sin(\theta)|| \end{matrix}$$ 

$sin^2(\theta)+cos^2(\theta)=1$

Therefore $Q$ is an orthogonal matrix by satisfying both conditions above.

- **Reflection Example:**

$$Q=\begin{bmatrix} 0 & -1 \\
  -1 & 0 \end{bmatrix}$$

  Reflects over $y= -x$

Observe:

$$Q^T=\begin{bmatrix} 0 & -1 \\
  -1 & 0 \end{bmatrix}$$

$Q^T=Q^-1$

## - QR Factorization

If $A$ is an $m$ x $n$ matrix with $n$ linearly independent columns, then $A$ can be factored as $A=QR$ where $Q$ is an $m$ x $n$ matrix whose columns are an orthonormal basis
for $Col(A)$, and $R$ is an $n$ x $n$ upper triangular invertible matrix with positive entries on the diagonal.

**Example of QR factorization:**

Suppose. 

$$A=\begin{bmatrix} 1 & 3 & 5 \\
 1 & 1 & 0 \\
 1 & 1 & 2 \\
 1 & 3 & 3 \end{bmatrix}$$

 $$Q=\begin{bmatrix} \frac{1}{2} & \frac{1}{2}& \frac{1}{2} \\
  \frac{1}{2} & \frac{-1}{2} & \frac{-1}{2} \\
  \frac{1}{2} & \frac{-1}{2} & \frac{1}{2} \\
  \frac{1}{2} & \frac{1}{2} & \frac{-1}{2} \end{bmatrix}$$

  and
  
  $$R=\begin{bmatrix} 2 & 4 & 5 \\
   0 & 2 & 3 \\
   0 & 0 & 2 \end{bmatrix}$$

$A=QR$

For $A$: it is a 4x3 matrix and columns are linearly independent.

For $Q$ it is also a 4x3 matrix and columns form an orthonormal basis for $Col(A)$

For $R$: it is a 3x3 upper triangular invertible matrix with positive entries along the diagonal.

## - Solving Least-Squares Problems with QR factorization

Previously one way to find the least-squares solution to $A\vec{x}=\vec{b}$ was to set up and solve the normal equations:

$A^TA\vec{x}=A^T\vec{b}$

If the columns of $A$ however are linearly independent the least squares solution can be computed more reliably through a $QR$ factorization of $A$.

**Least-Squares Solution**

Suppose $A$ is an mxn matrix with linearly independent columns and that the $QR$ factorization is given by: $A=QR$. Then the least-squares solution to $A\vec{x}=\vec{b}$
is calculated by the solution to:

$R\vec{x}=Q^T\vec{b}$

Example:

Use the $QR$ factorization above to find the least-squares solution of 




$$A\vec{x}=\begin{bmatrix} 3 \\\ 5 \\\ 7 \\\ -3 \end{bmatrix}$$

$$Q^T\vec{b}=\begin{bmatrix} \frac{1}{2} & \frac{1}{2} & \frac{1}{2} & \frac{1}{2} \\
  \frac{1}{2} & \frac{-1}{2} & \frac{-1}{2} & \frac{1}{2} \\
  \frac{1}{2} & \frac{-1}{2} & \frac{1}{2} & \frac{-1}{2} \end{bmatrix} \begin{bmatrix} 3 \\\ 5 \\\ 7 \\\ -3 \end{bmatrix}=\begin{bmatrix} 6 \\\ -6 \\\ 4 \end{bmatrix}$$

Translate into an augmented matrix:


$$\begin{bmatrix} 2 & 4 & 5 & 6 \\
 0 & 2 & 3 & -6 \\
 0 & 0 & 2 & 4 \end{bmatrix}$$

 RREF and Solve:

$$\begin{bmatrix} 1 & 0 & 0 & 10 \\
 0 & 1 & 0 & -6 \\
 0 & 0 & 1 & 2 \end{bmatrix}$$

 $$\hat{x}=\begin{bmatrix} 10 \\\ -6 \\\ 2 \end{bmatrix}$$

This is the least-squares solution.

## - Diagonalization of a matrix



