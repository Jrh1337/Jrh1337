# MATH 220 LINEAR ALGEBRA WEEK 7-12 TABLE OF CONTENTS

[WEEK 7: Inverse Matrices](./MATH220.md#week-7-inverse-matrices-elementary-matrices)
- The Row Space and the Rank of $A^T$
- Invertible and Singular Matrices
- Inverse of 2x2 Matrices
- Solving Systems with $A^{-1}$
- The Invertible Matrix Theorem
- Elementary Matrices
- Computing the Inverse Matrix



[WEEK 8: Determinants](./MATH220.md#week-8-determinants)
- The Idea of Determinants
- Determinants in Higher Dimensions
- The Determinant Formula for 2x2 Matrices
- When the Determinant is 0
- The Determinant of Elementary Matrices
- The Determinant of Products
- Effect of Row Operations on the Determinant
- Computing the Determinant using row Reduction
- Computing the Determinant using Cofactor Expansion
- Other Properties of Determinants


[WEEK 9: Eigenvectors, Length and Projections](./MATH220.md#week-9-eigenvectors-length-and-projections)
- The Meaning of Eigenvectors and Eigenvalues
- Computing the Eigenvalues of a Matrix
- Multiplicities of Eigenvalues
- Finding Eigenvectors
- The Dot Product and Length of Vectors
- Unit Vectors and the distance between Vectors
- Projections onto Vectors
- Orthogonality and Orthonormal Sets


[WEEK 10: Orthonormal Basis, Eigenbasis, Long Term Behavior of Population Matrices and Projection onto Subspaces](./MATH220.md#week-10-orthonormal-basis-eigenbasis-long-term-behavior-of-population-matrices-projection-onto-subspaces)
- Orthonormal Basis
- Writing a Vector as a linear combination of an orthonormal basis
- Eigenspaces
- Eigenbasis
- Using an Eigenbasis in iterates of a Linear Transformation
- Long-Term Behavior of a Population Matrix
- Example with Finding Long-Term Behavior of a Population
- Projecting onto a Subspace
- Orthogonal Decomposition


[WEEK 11: Least Squares Approximation, QR factorization and Diagonalizable Matrices](./MATH220.md#week-11-least-squares-approximation-qr-factorization-and-diagonalizable-matrices)
- Introduction to Least Squares Approximation
- Normal Equations for Solving Least Squares
- Least-Squares Example
- Orthogonal Matrices
- QR Factorization
- Solving Least-Squares with QR Factorization
- Diaginalization of a Matrix
- Computing the Diagonalization of a Matrix
- When is a MAtrix Diagonalizable
- Determining if a Matrix is Diagonalizable

[WEEK 12: SVD and Abstract Vectors](./MATH220.md#week-12-svd-and-abstract-vectors)
- The Singular Value Decomposition (SVD)
- Using SVD to find a low-rank approximation of a matrix
- Vector Space
- Examples of Vector Spaces
- Definition of a Subspace
- Examples of a Subspace
- Subspaces of $R^n$



# Week 7 Inverse Matrices, Elementary Matrices

## - The Row Space and the Rank of $A^T$

The column space of $A^T$ consists of all linear combinations of the rows of $A$.  This is referred to as the row space of $A$.

The rank of $A^T$ equals the rank of $A$.  That is the row space of $A$ has the same dimension as the column space of $A$.

So this gives us another way to compute the rank:

Instead of counting number of linearly independent columns you can count number of linearly independent columns and remove redundent rows or columns.

Example:

What is the biggest possible rank of a matrix given the dimensions:

1. 3x4? Biggest rank would be the minimum of m or n, so rank cannot exceed 3

2. 7x5? max rank is 5.

## - Invertible and Singular Matrices

Example:

$$A = \begin{bmatrix} 1 & 0 \\\ 0 & 0 \end{bmatrix}$$

so that $T(\vec{x}) = A\vec{x}$ is the linear transformation that projects vectors onto the x-axis.  Why is this matrix not invertible?

Everything get projected onto the x-axis unclear where to put points back to original positions.

$A$ is invertible if $A^{-1}$ exists.  If no such matrix exists then $A$ is singular.

**Determining Invertible Linear Transformations

A transformation $T: R^n \to R^n$ is invertible if and only if it is both one-to-one and onto

So the rank must be = to $n$

Example:  Determine if each Matrix is invertible or singular

$$A = \begin{bmatrix} 1 & 0 & 2 \\\ 0 & 1 & 0 \\\ 0 & 0 & 2 \end{bmatrix}$$

rank = 3 = $n$ so yes invertible

$$A = \begin{bmatrix} 3 & 0 & 1 \\\ 0 & 2 & 2 \\\ 0 & 4 & 4 \end{bmatrix}$$

Row 3 is redundent therefore rank must be less than 3, so this matrix is singular.


## - Inverse of 2x2 Matrices

If:

$$A = \begin{bmatrix} a & b \\\ c & d \end{bmatrix}$$

then $A$ is invertible when:

$$ad - bc \neq 0$$

and 

$$A^{-1} = \frac{1}{ad - bc} \begin{bmatrix} d & -b \\\ -c & a \end{bmatrix}$$


Example: Find the inverse if it exists of:

$$A = \begin{bmatrix} 1 & 3 \\\ 2 & 5 \end{bmatrix}$$

$ad-bc = 1(5) - 2(3) = -1$

Invertible

$$A^{-1} = \frac{1}{-1} \begin{bmatrix} 5 & -3 \\\ -2 & 1 \end{bmatrix} = \begin{bmatrix} -5 & 3 \\\ 2 & -1 \end{bmatrix}$$

Example: Find the inverse

$$A = \begin{bmatrix} 1 & 2 \\\ 2 & 4 \end{bmatrix}$$

$$ad - bc = 4 - 4 = 0$$

This matrix is singular based on this, however also notice that the rows and columns are both linearly dependent.


## - Solving Systems with $A^{-1}$

A square matrix $A$ is invertible only for all $\vec{b}$ in $R^n$, $A\vec{x} = \vec{b}$ is consisent and has a unique solution.

Being onto and one-to-one are equivalent statements.

If $A$ is invertible the unique solution $A\vec{x} = \vec{b}$ is:

$$\vec{x} = A^{-1}\vec{b}$$

Example: Solve:

$$A\vec{x} = \begin{bmatrix} 1 \\\ 2 \\\ 4 \end{bmatrix}$$

given

$$A^{-1} = \begin{bmatrix} 3 & 0 & 1 \\\ 0 & 2 & 2 \\\ 0 & 0 & 1 \end{bmatrix}$$

Multiply both sides by $A^{-1}$

$$A^{-1}\vec{x} = A^{-1} \begin{bmatrix} 1 \\\ 2 \\\ 4 \end{bmatrix}$$

$$\vec{x} = \begin{bmatrix} 3 & 0 & 1 \\\ 0 & 2 & 2 \\\ 0 & 0 & 1 \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \\\ 4 \end{bmatrix}$$

$$\vec{x} = \begin{bmatrix} 7 \\\ 12 \\\ 4 \end{bmatrix}$$




## - The Invertible Matrix Theorem

Summary of properties that are equivalent to making a matrix invertible

Suppose $A$ is a nxn matrix.  Then the following are all equivalent to $A$ being invertible:

1. The linear transformation $T: R^n \to R^n$ defined by $T(\vec{x}) = A\vec{x}$ is one-to-one and onto.
2. For all $\vec{b}$ in $R^n$, $A\vec{x} = \vec{b}$ is consistent and has a unique solution.
3. $rank(A) = n$ 
4. $nullity(A) = 0$

Recall how rank and nullity relate to one-to-one, onto and number of solutions to equations.

If rank(A) = n 
- $T$ is onto

If nullity(A) = 0
- $T$ is one-to-one

Additionally:

- The columns of $A$ are linearly independent
- There is a pivot in every column
- The rows of $A$ are linearly independent
- There is a pivot in every row
- The reduced echelon form of $A$ is the identity matrix

## - Elementary Matrices

An elementary matrix is one that is obatined by applying a single row operaion on the identity matrix

Example:

Find the elementary matrix $E$ that is the result of applying the row operation $R_{1} \Leftrightarrow R_{2}$ to the 2x2 identity matrix $I_{2}$

$$\begin{bmatrix} 1 & 0 \\\ 0 & 1 \end{bmatrix} R_{1} \Leftrightarrow R_{2} \begin{bmatrix} 0 & 1 \\\ 1 & 0 \end{bmatrix}$$

Now given the 2x2 matrix:

$$A= \begin{bmatrix} 1 & 2 \\\ 2 & 4 \end{bmatrix}$$

verify that $EA$ performs $R_{1} \Leftrightarrow R_{2}$ to $A$.

$$\begin{bmatrix} 0 & 1 \\\ 1 & 0 \end{bmatrix} \begin{bmatrix} 1 & 2 \\\ 2 & 4 \end{bmatrix} = \begin{bmatrix} 2 & 4 \\\ 1 & 2 \end{bmatrix}$$

Row 1 indeed swaps with row 2.

Example: Find $E^{-1}$ by undoing the row operation $R_{1} \Leftrightarrow R_{2}$ to $I_{2}$

Example: Find the elementary matrix $E$ that is the result of applying the row operation $R_{2}/5$ to the 2x2 identity matrix $I_{2}$.

$$\begin{bmatrix} 1 & 0 \\\ 0 & 1 \end{bmatrix} \Rightarrow \begin{bmatrix} 1 & 0 \\\ 0 & \frac{1}{5} \end{bmatrix}$$

Example: Given the 2x2 matrix 

$$A = \begin{bmatrix} 2 & -1 \\\ 0 & 5 \end{bmatrix}$$

verify that $EA$ performs $R_{2}/5$ to $A$.

$$EA = \begin{bmatrix} 1 & 0 \\\ 0 & \frac{1}{5} \end{bmatrix} \begin{bmatrix} 2 & -1 \\\ 0 & 5 \end{bmatrix} = \begin{bmatrix} 2 & -1 \\\ 0 & 1 \end{bmatrix}$$

**Elementary Matrices for Row Replacement**

Example:  Find the elementary matrix $E$ that is the result of applying the row operation $R_{2} \Rightarrow R_{2} - 4R_{1}$ to the 2x2 identity matrix $I_{2}$.

$$E = \begin{bmatrix} 1 & 0 \\\ -4 & 1 \end{bmatrix}$$

Given the 2x2 matrix:

$$A = \begin{bmatrix} 2 & 1 \\\ 8 & 6 \end{bmatrix}$$

verify that $EA$ performs $R_{2} \Rightarrow R_{2} - 4R_{1}$ to $A$.

$$EA = \begin{bmatrix} 1 & 0 \\\ -4 & 1 \end{bmatrix} \begin{bmatrix} 2 & 1 \\\ 8 & 6 \end{bmatrix} = \begin{bmatrix} 2 & 1 \\\ 0 & 2 \end{bmatrix}$$

Find $E^{-1}$ by undoing the row operation $R_{2} \Rightarrow R_{2} - 4R_{1}$ to $I_{2}$

You would find this by adding 4R1 to R2 it would look like $R_{2} \Rightarrow R_{2} + 4R_{1}$

$$E^{-1} = \begin{bmatrix} 1 & 0 \\\ 4 & 0 \end{bmatrix}$$

## - Computing the Inverse Matrix

**Using Elementary Matrices to find $A^{-1}$**

Suppose $A$ is an nxn matrix ad that $E_{1},...,E_{m}$ are nxn elementary matrices that correspond to $m$ row operations converting $A$ to the matrix $I_{n}$.  Then,

$$A^{-1} = E_{m} \cdots E_{2}E_{1}$$

Example: Find the inverse of:

$$A = \begin{bmatrix} 0 & 2 & 0 \\\ 1 & 0 & 0 \\\ 0 & 2 & 4 \end{bmatrix}$$

by reducing $A$ to $I_{3}$, keeping track of the corresponding elementary matrices, and then taking the appropriate product of the elementary matrices.

Below the changes made to the identity matrix are on the right with changes to $A$ on the left.

$$R_{1} \Leftrightarrow R_{2} \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 2 & 0 \\\ 0 & 2 & 4 \end{bmatrix} E_{1} = \begin{bmatrix} 0 & 1 & 0 \\\ 1 & 0 & 0 \\\ 0 & 0 & 1 \end{bmatrix}$$

This new matrix is equal to $E_{1}A$

$$R_{2}/2 \Rightarrow \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 2 & 4 \end{bmatrix} E_{2} = \begin{bmatrix} 1 & 0 & 0 \\\ 0 & \frac{1}{2} & 0 \\\ 0 & 0 & 1 \end{bmatrix}$$

This new matrix is equal to $E_{2}E_{1}A$

$$R_{3} \Rightarrow R_{3} - 2R_{2} \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 4 \end{bmatrix} E_{3} = \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & -2 & 1 \end{bmatrix}$$

This new matrix is equal to $E_{3}E_{2}E_{1}A$

$$R_{3}/4 \Rightarrow \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 1 \end{bmatrix} E_{4} = \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & \frac{1}{4} \end{bmatrix}$$

This new matrix is now the identity matrix and equivilent to $E_{4}E_{3}E_{2}E_{1}A$

$$A^{-1} = E_{4}E_{3}E_{2}E_{1}$$

Now for the much easier way:

Put $A$ and $I_{3}$ in one large augmented matrix and do row operations on both at the same time.

Example:

$$\begin{bmatrix} 0 & 2 & 0 & 1 & 0 & 0 \\\ 1 & 0 & 0 & 0 & 1 & 0 \\\ 0 & 2 & 4 & 0 & 0 & 1 \end{bmatrix}$$

After doing all row operations to reduce $A$, $A$ will become the identity matrix and the identity matrix will become $A^{-1}$

Final result:

$$\begin{bmatrix} 1 & 0 & 0 & 0 & 1 & 0 \\\ 0 & 1 & 0 & \frac{1}{2} & 0 & 0 \\\ 0 & 0 & 1 & - \frac{1}{4} & 0 & \frac{1}{4} \end{bmatrix}$$


# Week 8 Determinants

## - The Idea of Determinants

How is area changed under a linear transformation?

How does $T(\vec{x}) = A\vec{x}$ where:

$$A = \begin{bmatrix} 5 & 0 \\\ 0 & 1 \end{bmatrix}$$

distort area?

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/ccfa25f1-7b92-46ea-b69a-2af90115447b)

$T$ scales area by a factor of 5 (as a linear map it scales other shapes by the same factor).

How does $T(\vec{x}) = A\vec{x}$ where:

$$A = \begin{bmatrix} -5 & 0 \\\ 0 & 1 \end{bmatrix}$$

distort signed area? (the signed area is negative if the orientation is reversed).

$T$ scales vectors horizontally by 5 then reflects over the y-axis

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/11b10b2f-0645-49f7-b166-8dc1efac19fe)

Notice the standard basis vectors got flipped around so the orientation is reversed.  

The signed area has been changed by a factor of -5

**Informal Meaning of the Determinant**

Suppose $A$ is an nxn matrix.  Then the determinant measures how signed area/volume is changed under $T: R^{n} \to R^{n}$ where $T(\vec{x}) = A\vec{x}$

$$det \bigl( \begin{bmatrix} 5 & 0 \\\ 0 & 1 \end{bmatrix} \bigr) = 5$$

$$det \bigl( \begin{bmatrix} -5 & 0 \\\ 0 & 1 \end{bmatrix} \bigr) = -5$$

Examples:

Determine what the determinant should be of the following by inspecting how area of the unit square changes.

1. Horizontal scaling by 2 and vertical scaling by 3:

$$\begin{bmatrix} 2 & 0 \\\ 0 & 3 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/4c782bcc-6484-4818-8648-ae45cabddb3a)

2. Rotating counterclockwise by $\frac{\pi}{4}$

$$\begin{bmatrix} cos(\frac{\pi}{4}) & -sin(\frac{\pi}{4}) \\\ sin(\frac{\pi}{4}) & cos(\frac{\pi}{4}) \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/1df26030-a3fc-438a-8726-bbf24522dbfc)

3. Projection onto the x-axis:

$$A = \begin{bmatrix} 1 & 0 \\\ 0 & 0 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/6d525fe8-2af4-494a-b276-8c38567948c7)

If rank(A) < 2 for a 2x2 matrix, range is collapsed and determinant is 0 in this case.

## - Determinants in Higher Dimensions

- For 3x3 matrices, we measure how the signed volume is changed.
- For nxn matrices, we measure how signed n-volume is changed
- if rank(A) < n, the $T$ collapses vectors so the dimension reduces.  This implies det(A) = 0.

What is n-volume?

In higher dimensions its not clear what these objects mean.  However we can use the ideas from lower dimensions to generalize formulas for higher dimensions.

This will tell us how to measure the size of a 4 dimensional object.

Examples:

Find the Determinants

$$\begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 1 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/a60d8d5e-7a9c-4c9d-8165-15d3f7279255)



$$\begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 0 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/efc5ccf7-0eef-4324-afdf-7b6116647076)

$$\begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 4 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/5c2e5c6b-82e3-4141-b600-984ad1700fbc)

$$\begin{bmatrix} 2 & 0 & 0 \\\ 0 & 3 & 0 \\\ 0 & 0 & 4 \end{bmatrix}$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/909081f0-3a97-44e1-94eb-6f2ad9c48648)


## - The Determinant Formula for 2x2 Matrices


For a 2x2 matrix in the form:

$$\begin{bmatrix} a & b \\\ c & d \end{bmatrix}$$

$$det(A) = |A| = \begin{vmatrix} a & b \\\ c & d \end{vmatrix} = ad - bc$$

If the $det(A) = 0$ is equivalent to $rank(A) < 2$ and $A$ being a singular matrix

Compute the determinant of each matrix:

$$\begin{bmatrix} 3 & 6 \\\ 2 & 4 \end{bmatrix} = 3(4) - 6(2) = 0$$

Singular

$$\begin{bmatrix} -5 & 0 \\\ 10 & -2 \end{bmatrix} = -5(-2) - (0)(10) = 10$$

Invertible $ad-bc \neq 0$

Connection with the inverse notice the formula for calculating the inverse of a 2x2 matrix is:

$$A^{-1} = \frac{1}{ad - bc} \begin{bmatrix} d & -b \\\ -c & a \end{bmatrix}$$

Notice if $ad - bc = 0$ this would be undefined with a 0 in the denominator.  Hence when the $det(A) = 0$ it's the same as $A$ being singular.

## - When the Determinant is Zero

When the determinant is 0 that means things collapse and the dimension is reduced under $T(\vec{x}) = A\vec{x}$

Suppose $A$ is an nxn matrix.  Then, $det(A) = 0$ if an only if $rank(A) < n$

As a consequence, $det(A) = 0$ is equivelent to:
- $A$ is singular
- rows are linearly dependent
- columns are linearly dependent
- and other things from  the invertible matrix theorem

Example: Compute the Determinant using theory

$$\begin{bmatrix} 1 & 2 & 3 \\\ 2 & 4 & 6 \\\ 1 & 1 & 1 \end{bmatrix}$$

The determinant is 0 because the rows are linearly dependent R2 = 2R1

## - The Determinant of Elementary Matrices

$det(I_{n}) = 1$

if $E$ corresponds to scaling a row by $r$: $det(E) = r$

if $E$ corresponds to a row swap: $det(E) = -1

if $E$ correponds to a row replacement: $det(E) = 1$

Row scaling Example:

$$\begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 4 \end{bmatrix}$$

The determinant is equal to 4 because hight is scaled by 4

$$\begin{bmatrix} 1 & 0 & 0 & 0 \\\ 0 & 1 & 0 & 0 \\\ 0 & 0 & -4 & 0 \\\ 0 & 0 & 0 & 1 \end{bmatrix}$$

The third row is being scaled by -4 which means the determinant is -4

**Row Swap**

Reverses the orientation but volume doesn't change

$$\begin{bmatrix} 0 & 1 \\\ 1 & 0 \end{bmatrix}$$

orientation reversed hence determinant is -1

**Row Replacement Example**

Row replacement does not change the determinant

$$\begin{bmatrix} 1 & -2 \\\ 0 & 1 \end{bmatrix}$$

This is a horizontal shear but even though one of the vectors is changing the area and volume is not changing.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/bcc1bd9a-7495-44af-b5df-727a75b32993)

These methods work under higher dimensions

## - The Determinant of Products

If $A$ and $B$ are both nxn matrices then,

$$det(AB) = det(A)det(B)$$



## - Effect of row operations on Determinants

Note: $det(rA) = r^ndet(A)$

Suppose:

$$\begin{vmatrix} a & b & c \\\ d & e & f \\\ g & h & i \end{vmatrix} = 7$$

$$\begin{vmatrix} 3a & 3b & 3c \\\ d & e & f \\\ g & h & i \end{vmatrix} = 3 \begin{vmatrix} a & b & c \\\ d & e & f \\\ g & h & i \end{vmatrix} = 3 * 7$$

$$\begin{vmatrix} 3a & 3b & 3c \\\ 3d & 3e & 3f \\\ g & h & i \end{vmatrix} = 3^2 \begin{vmatrix} a & b & c \\\ d & e & f \\\ g & h & i \end{vmatrix} = 3^2 * 7$$

$$\begin{vmatrix} 3a & 3b & 3c \\\ 3d & 3e & 3f \\\ 3g & 3h & 3i \end{vmatrix} = 3^3 \begin{vmatrix} a & b & c \\\ d & e & f \\\ g & h & i \end{vmatrix} = 3^3 * 7$$

Example: Suppose $A$ is a 4x4 matrix where $det(A) = 3$ Find $det(2A)$

$2^4 * 3$

## - Computing the Determinant Using Row Reduction

Compute:

$$\begin{vmatrix} 1 & 2 & 9 \\\ 0 & 2 & 6 \\\ 0 & 0 & 3 \end{vmatrix}$$

Doing just row replacements which don't change the determinant you get:

$$\begin{vmatrix} 1 & 0 & 0 \\\ 0 & 2 & 0 \\\ 0 & 0 & 3 \end{vmatrix}$$

Pulling out the scalers of each row:

$$= 2 * 3 * 1 \begin{vmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \\\ 0 & 0 & 1 \end{vmatrix}$$

**Observation**

If $U$ is in echelon form, then $det(U)$ is equal to the product of the components along the diagonal. 

**Calculating the Determinant for any nxn Matrix**

Example: Compute:

$$\begin{vmatrix} 3 & 6 & -9 \\\ 0 & 0 & -2 \\\ -2 & 1 & 5 \end{vmatrix}$$

Factor out a 3 from the first row:

$$3 \begin{vmatrix} 1 & 2 & -3 \\\ 0 & 0 & -2 \\\ -2 & 1 & 5 \end{vmatrix}$$

Row replacement $R3 \to R3 + 2R1$

$$3 \begin{vmatrix} 1 & 2 & -3 \\\ 0 & 0 & -2 \\\ 0 & 5 & 11 \end{vmatrix}$$

Row swap:

$$-3 \begin{vmatrix} 1 & 2 & -3 \\\ 0 & 5 & 11 \\\ 0 & 0 & -2 \end{vmatrix}$$

Now in echelon form multiply elements along the diagonal and the scalar sign change from any row swaps

$(-3) * (1) * (5) * (-2)$

## - Computing the Determinant using Cofactor Expansion

Using the formula from a 2x2 matrix:

$$det(A) = ad - bc$$

Formula for a 3x3 matrix:

$$\begin{vmatrix} a_{11} & a_{12} & a_{13} \\\ a_{21} & a_{22} & a_{23} \\\ a_{31} & a_{32} & a_{33} \end{vmatrix} = a_{11} \begin{vmatrix} a_{22} & a_{23} \\\ a_{32} & a_{33} \end{vmatrix} - a_{12} \begin{vmatrix} a_{21} & a_{23} \\\ a_{31} & a_{33} \end{vmatrix} + a_{13} \begin{vmatrix} a_{21} & a_{22} \\\ a_{31} & a_{32} \end{vmatrix}$$


![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/e5ce2498-ac06-486c-8bfc-185a1b985d4c)

Cross out the row and column of each scalar and place the remainder of the matrix in each.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/ea7dc6bd-bf53-40c2-89e3-65cbd7013e30)

Honestly just use the row reduction method fam.

## - Other Properties of Determinants

- $det(AB) = det(A)det(B)$
- $det(A^k) = (det(A))^k$
- $det(A^{-1}) = \frac{1}{det(A)}$
- $det(A^T) = det(A)$

Example: Let $A$ and $B$ be 3x3 matrices with $det(A) = 3$ and $det(B) = -1$.  Compute Each:

1. $det(AB)$
2. $det(B^5)$
3. $det(A^TBA)$
4. $det(B^{-1}AB)$



Answers:
1. -3
2. -1
3. -9
4. 3


Just keep in mind:

$$det(A + B) \neq det(A) + det(B)$$


# Week 9 Eigenvectors, Length and Projections

## - The Meaning of Eigenvectors and Eigenvalues

A scalar $\lambda$ is called an eigenvalue of an nxn matrix $A$ if there is a nonzero solution $\vec{v}$ of $A\vec{v} = \lambda\vec{v}$.  Such an $\vec{v}$ is called an eigenvector corresponding to $\lambda$.

Alternatively, $\lambda$, $\vec{v}$ is an eigenvector/eigenvalue of the linear transformation $T: R^n \to R^n$ if $T(\vec{v}) = \lambda \vec{v}$

Example: 

Confirm that:

$$\vec{v} = \begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

is an eigenvector and that:

$$\vec{w} = \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

is not an eigenvector of:

$$\begin{bmatrix} 0 & 2 \\\ 2 & 0 \end{bmatrix}$$


$$A\vec{v} = \begin{bmatrix} 0 & 2 \\\ 2 & 0 \end{bmatrix} \begin{bmatrix} 1 \\\ 1 \end{bmatrix} = \begin{bmatrix} 2 \\\ 2 \end{bmatrix} = ? \begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

So what scalar would we have to multiply by (1, 1) to create (2, 2)?  That would be a two so $\lambda = 2$

$$A\vec{v} = \begin{bmatrix} 0 & 2 \\\ 2 & 0 \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \end{bmatrix} = \begin{bmatrix} 4 \\\ 2 \end{bmatrix} = ? \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

There is no scalar that will multiply (1,2) to produce (4, 2) so $\vec{w}$ is not an eigenvector.

**Visualizing Eigenvectors in a Linear Transformation**

Example:  Find the Eigenvectors of the transformation $T: R^2 \to R^2$ where $T$ is the transformation that projects vectors onto the x-axis and scales vectors horizontally by a factor of 3.  Confirm your answer by looking at the standard matrix $A$.


![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/f8be06a8-e331-4857-bb19-539371e1702f)


The meaning of an eigenvalue being zero is the eigenvector gets sent to the 0 vector.

Note we dont let 0 itself be an eigenvector.  However 0 can be an eigenvalue.

If a Matrix has an eigenvalue of 0 then the matrix is singular. Means the nullspace contains nonzero vectors.


## - Computing the Eigenvalues of a Matrix

**The Characteristic Equation**

A scalar $\lambda$ is an eigenvalue of an nxn matrix $A$, if and only if it satisfies the characteristic equation:

$$det(A - \lambda I_{n}) = 0$$

$det(A - \lambda I_{n})$ is reffered to as the characteristic polynomial of $A$.

Example: Find the Eigenvalues of:

$$\begin{bmatrix} 2 & 7 \\\ 7 & 2 \end{bmatrix}$$

$$A - \lambda I_{n} = \begin{bmatrix} 2 & 7 \\\ 7 & 2 \end{bmatrix} - \lambda \begin{bmatrix} 1 & 0 \\\ 0 & 1 \end{bmatrix} = \begin{bmatrix} 2 - \lambda & 7 \\\ 7 & 2 - \lambda \end{bmatrix}$$

now take the determinant:

$$det(A - \lambda I_{n}) = \begin{vmatrix} 2 - \lambda & 7 \\\ 7 & 2 - \lambda \end{vmatrix} = (2 - \lambda)(2 - \lambda) - 7(7) = \lambda^2 - 4\lambda - 45$$

The result is the characteristic polynomial now set this equal to 0 and solve for $\lambda$

$$(\lambda - 9)(\lambda + 5)$$

$$\lambda = 9, -5$$

More Examples: Find the Eigenvalues

$$\begin{bmatrix} 2 & 1 \\\ -1 & 4 \end{bmatrix}$$

$$\begin{vmatrix} 2 - \lambda & 1 \\\ -1 & 4 - \lambda \end{vmatrix} = (2 - \lambda)(4 - \lambda) - (-1)(1) = \lambda^2 - 6\lambda + 9$$

$$(\lambda - 3)(\lambda - 3) = 0$$

$$\lambda = 3$$

Note there is only one eigenvalue.

$$\begin{bmatrix} 5 & 3 \\\ -4 & 4 \end{bmatrix}$$

$$\begin{vmatrix} 5 - \lambda & 3 \\\ -4 & 4 - \lambda \end{vmatrix} = (5 - \lambda)(4 - \lambda) - (3)(-4) = \lambda^2 - 9\lambda + 32$$

After using quadratic formula you will get complex eigenvalues. (no real Eigenvalues)

## - Multiplicities of Eigenvalues

A 2x2 Matrix can have:
- Two distinct real Eigenvalues
- One repeated Eigenvalue
- Two distinct complex Eigenvalues

The Algebraic multiplicity of an eigenvalue $\lambda$ is its multiplicity as a root of the characteristic equation.

Example: Find the eigenvalues and there multiplicities:

$$\begin{bmatrix} 4 & -2 & 5 \\\ 0 & 3 & 1 \\\ 0 & 0 & 2 \end{bmatrix}$$

Note this is already in echelon form so just subtract $\lambda$ along the diagonal and then multiply the diagonal

$$\begin{bmatrix} 4 - \lambda & -2 & 5 \\\ 0 & 3 - \lambda & 1 \\\ 0 & 0 & 2 - \lambda \end{bmatrix}$$

$$\begin{vmatrix} 4 - \lambda & -2 & 5 \\\ 0 & 3 - \lambda & 1 \\\ 0 & 0 & 2 - \lambda \end{vmatrix} = (4 - \lambda)(3 - \lambda)(2 - \lambda)$$

$$\lambda = 4,3,2$$

Each $\lambda$ has a multiplicity of 1.

Harder example:

$$\begin{bmatrix} -5 & 2 & -6 \\\ 2 & -2 & 3 \\\ 4 & -2 & 5 \end{bmatrix}$$

$$\begin{bmatrix} -5 - \lambda & 2 & -6 \\\ 2 & -2 - \lambda & 3 \\\ 4 & -2 & 5 - \lambda \end{bmatrix}$$

$$\begin{vmatrix} -5 - \lambda & 2 & -6 \\\ 2 & -2 - \lambda & 3 \\\ 4 & -2 & 5 - \lambda \end{vmatrix}$$

Do a cofactor expansion:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/be03903b-656f-4268-9eb8-4bdcb0968a81)

$\lambda = -1, 0$

Note that -1 has a multiplicity of 2, 0 a multiplicity of 1.

## - Finding Eigenvectors

Example: Given that $\lambda = 10$ is an eigenvalue of:

$$\begin{bmatrix} 4 & -2 \\\ -3 & 9 \end{bmatrix}$$

Find a corresponding eigenvector

Find $\vec{v}$ so $A\vec{v} = \lambda \vec{v}$

$(A - \lambda I_{n})\vec{v} = \vec{0}$

Solve:

$$\begin{bmatrix} 4-10 & -2 & 0 \\\ -3 & 9 - 10 & 0 \end{bmatrix} = \begin{bmatrix} -6 & -2 & 0 \\\ -3 & -1 & 0 \end{bmatrix} = \begin{bmatrix} -6 & -2 & 0 \\\ 0 & 0 & 0 \end{bmatrix}$$

$$\begin{bmatrix} 1 & \frac{1}{3} & 0 \\\ 0 & 0 & 0 \end{bmatrix}$$

The first column corresponds to $V_{1}$ and the second column $v_{2}$ note that $v_{2}$ is a free variable.

$$\vec{v} = \begin{bmatrix} v_{1} \\\ v_{2} \end{bmatrix} = \begin{bmatrix} \frac{-1}{3} v_{2} \\\ v_{2} \end{bmatrix} = v_{2} \begin{bmatrix} \frac{-1}{3} \\\ 1 \end{bmatrix}$$

To find one specific solution, choose any nonzero value for $v_{2}$ This goes back to an eigenvector not being allowed to be the $\vec{0}$

Any nonzero multiple is an eigenvector.

Example: Find all eigenvectors corresponding to the eigenvalue $\lambda = 3$ for:

$$\begin{bmatrix} 4 & 2 & 3 \\\ -1 & 1 & -3 \\\ 2 & 4 & 9 \end{bmatrix}$$

$$\begin{bmatrix} 4 - \lambda & 2 & 3 & 0 \\\ -1 & 1 - \lambda & -3 & 0 \\\ 2 & 4 & 9 - \lambda & 0 \end{bmatrix}$$

$$\begin{bmatrix} 4 - 3 & 2 & 3 & 0 \\\ -1 & 1 - 3 & -3 & 0 \\\ 2 & 4 & 9 - 3 & 0 \end{bmatrix}$$

$$\begin{bmatrix} 1 & 2 & 3 & 0 \\\ -1 & -2 & -3 & 0 \\\ 2 & 4 & 6 & 0 \end{bmatrix}$$

After doing row operations:

$$\begin{bmatrix} 1 & 2 & 3 & 0 \\\ 0 & 0 & 0 & 0 \\\ 0 & 0 & 0 & 0 \end{bmatrix}$$

$v_{2}$ and $v_{3}$ are free

$$\vec{v} = \begin{bmatrix} v_{1} \\\ v_{2} \\\ v_{3} \end{bmatrix} = \begin{bmatrix} -2v_{2} - 3v_{3} \\\ v_{2} \\\ v_{3} \end{bmatrix}$$

Put in parametric vector form:

$$= v_{2} \begin{bmatrix} -2 \\\ 1 \\\ 0 \end{bmatrix} + v_{3} \begin{bmatrix} -3 \\\ 0 \\\ 1 \end{bmatrix}$$

The eigen vectors are everything in the span except for the zero vector.

## - The Dot Product and Length of Vectors

$$\vec{v} * \vec{w} = v_{1}w_{1} + \cdots + v_{n}w_{n} = \vec{v} \vec{w}^T$$

This is also referred to as the scalar product or inner product

**Length of a Vector**

The length of a vector $\vec{v}$ is given by:

$$||\vec{v}|| = \sqrt{v * v}$$

so,

$$||\vec{v}||^2 = \vec{v} * \vec{v}$$

Example:

Find the length of $\vec{v} = (1, 2, 3)$

$$||\vec{v}||^2 = \vec{v} * \vec{v} = (1, 2, 3) * (1, 2, 3) = 14$$

$$||\vec{v}|| = \sqrt{v * v} = \sqrt{14}$$

**Scaled Length**

$$||k\vec{v}|| = |k|||\vec{v}||$$

Example:

Suppose $\vec{v} = (-3, 1, 4)$ Find $||\vec{v}||$ and $||-5\vec{v}||$

$$||\vec{v}|| = \sqrt{\vec{v} * \vec{v}} = \sqrt{(-3)^2 + 1^2 + 4^2} = \sqrt{26}$$

$$||-5\vec{v}|| = |-5|||\vec{v}|| = 5 * \sqrt{\vec{v} * \vec{v}} = 5\sqrt{26}$$

## - Unit Vectors and the Distance between Vectors

A vector $\vec{u}$ is a unit vector (or normal vector) if $||\vec{u}|| = 1$.  That is the length is 1.

Equivalently, $||\vec{u}||^2 = 1$ or $\vec{u} * \vec{u} = 1$

To get the unit vector $\vec{u}$ in the direction of $\vec{v}$, take $\vec{u} = \frac{\vec{v}}{||\vec{v}||}$.  This is referred to as normalizing $\vec{v}$.

From the previous example:

$$||\vec{v}|| = \sqrt{26}$$

This is not a unit vector because the length isn't 1.

To Find the unit vector that goes in the direction of $\vec{v}$

$$\vec{u} = \frac{\vec{v}}{||\vec{v}||} = \frac{(-3, 1, 4)}{\sqrt{26}} = (\frac{-3}{\sqrt{26}}, \frac{1}{\sqrt{26}}, \frac{4}{\sqrt{26}})$$

Example: Let $\vec{v} = (1, -2, 2, 0)$ Find the unit vector in the direction of $\vec{v}$

$$||\vec{v}|| = 3$$

$$\vec{u} = \frac{(1, -2, 2, 0)}{3} = (\frac{1}{3}, \frac{-2}{3}, \frac{2}{3}, 0)$$

**Finding the Distance Between Vectors**

The distance between vectors $\vec{w}$ and $\vec{v}$ in $R^n$ is given by:

$$||\vec{v} - \vec{w}||$$

Example: Compute the distance of $(1, 2, 3)$ and $(0, 2, 2)$

$$\vec{v} - \vec{w} = (1 - 0, 2 - 2, 3 - 2) = (1, 0, 1)$$

$$= \sqrt{1^2 + 0^2 + 1^2} = \sqrt{2}$$

## - Projecting onto Vectors

Consider $\vec{v} = (3, 5)$

Compute $\vec{v} * \vec{e_{1}}$ and $\vec{v} * \vec{e_{2}}$

Notice that the first product gives back 3 the first coordinate of $\vec{v}$ and the next gives the second coordinate.

We see that $\vec{v} * \vec{e_{i}}$ gives how much of $\vec{v}$ lies in the direction of $\vec{e_{i}}$.

So, $(\vec{v} * \vec{e_{i}}) \vec{e_{i}}$ is the projection of $\vec{v}$ onto $\vec{e_{i}}$.

**Dot products are invariant(Don't change) under rotation in $R^2$**

-----------------------------------------------------------------------------------------------------------------

**Projection onto any unit Vector**

Suppose $\vec{v}$ is a vector in $R^n$ and $\vec{u}$ is any unit vector in $R^n$.

Then the orthogonal projection of $\vec{v}$ onto $\vec{u}$ is denoted $proj_{\vec{u}} \vec{v}$ and is computed by:

$$proj_{\vec{u}} \vec{v} = (\vec{v} * \vec{u}) \vec{u}$$

That is, $\vec{v} * \vec{u}$ measures the amount of $\vec{v}$ in the direction of $\vec{u}$.

-----------------------------------------------------------------------------------------------------------------

Example: Compute the projections of $\vec{v} = (1, 2, 3)$ onto the unit vector $\vec{u} = \frac{1}{\sqrt{5}} (2, 0, 1)$

$$\vec{u} = (\frac{2}{\sqrt{5}}, 0, \frac{1}{\sqrt{5}})$$

$$proj_{\vec{u}} \vec{v} = ((1, 2, 3) * (\frac{2}{\sqrt{5}}, 0, \frac{1}{\sqrt{5}})) * (\frac{2}{\sqrt{5}}, 0, \frac{1}{\sqrt{5}})$$

$$= \frac{5}{\sqrt{5}} (\frac{2}{\sqrt{5}}, 0, \frac{1}{\sqrt{5}}) = (2, 0, 1)$$

-----------------------------------------------------------------------------------------------------------------

**Projection onto any Vector or Line**

Suppose $\vec{w}$ is a vector (not necessarily a unit vector).  Then the projection of $\vec{v}$ onto $\vec{w}$ is given by:

$$proj_{\vec{w}} \vec{v} = \frac{(\vec{v} * \vec{w})}{||\vec{w}||^2} \vec{w}$$

This is also referred to as the projection of $\vec{v}$ onto the line in the direction of $\vec{w}$

-----------------------------------------------------------------------------------------------------------------

Example: Compute the projection of $\vec{v} = (1, 7)$ onto the line in the direction of the vector $\vec{w} = (-4, 2)$

$$proj_{\vec{w}} \vec{v} = \frac{(\vec{v} * \vec{w})}{||\vec{w}||^2} \vec{w} = \frac{10}{20} \vec{w} = \frac{1}{2} (-4, 2) = (-2, 1)$$

-----------------------------------------------------------------------------------------------------------------

## - Orthogonality and Orthonormal Sets

Two vectors are orthogonal (perpendicular) if $\vec{v} * \vec{w} = 0$

Happens when the dot product is equal to zero.

-----------------------------------------------------------------------------------------------------------------

Example: Set $\vec{q} = (1, 2, 3, 4), \vec{v} = (2, 1, 0, -1), \vec{w} = (1, 1, -1, 0)$.  Which vectors are orthogonal to each other?

Find which dot products = 0.

$$(1, 2, 3, 4) * (2, 1, 0, -1) = (2 + 2 + 0 -4) = 0$$

$$(1, 2, 3, 4) * (1, 1, -1, 0) = (1 + 2 - 3 + 0) = 0$$

$$(1, 1, -1, 0) * (2, 1, 0, -1) = (2 + 1 + 0 + 0) = 3$$

From the dot products above $\vec{v}$ and $\vec{w}$ are not orthogonal to each other

-----------------------------------------------------------------------------------------------------------------

**Orthogonal Set vs Orthonormal Set**

An orthogonal set is a collection of vectors that are orthogonal to each other.

An orthonormal set is an orthogonal set where each vector is a unit vector.

-----------------------------------------------------------------------------------------------------------------

Example: Determine if the following sets are orthogonal/orthonormal.  If the are orthogonal but not orthonormal, normalize each vector to make an orthonormal set.

$$\begin{bmatrix} -0.6 \\\ 0.8 \end{bmatrix} \begin{bmatrix} 0.8 & 0.6 \end{bmatrix}$$

$$(-0.6)(0.8) + (0.8)(0.6) = 0$$

Orthogonal, to determine if orthonormal, measure length of each vector:

$$= \sqrt{(-0.6)^2 + (0.8)^2} = \sqrt{0.36 + 0.64} = \sqrt{1} = 1$$

$$= \sqrt{(0.8)^2 + (0.6)^2} = \sqrt{0.64 + 0.36} = \sqrt{1} = 1$$

This is an orthonormal set.








# Week 10 Orthonormal Basis, Eigenbasis, Long Term Behavior of Population Matrices, Projection Onto Subspaces

## - Orthonormal Basis

A basis for a subspace satisfies:
1. The span of the basis vectors is equal to the space in $W$
2. The vectors form a linearly independent set

$W$ is a p-dimensional space living in $R^n$

Another way to look at it:

Any $\vec{w}$ in $W$ can be written uniquely as $\vec{w} = a_{1}\vec{v_{1}} + \cdots + a_{p}\vec{v_{p}}$

-----------------------------------------------------------------------------------------------------------------

An orthogonal basis for a subspace $H$ is a basis for $H$ that is also an orthogonal set.

An orthonormal basis for a subspace $H$ is a basis for $H$ that is also an orthonormal set.

Note: If a set is orthogonal, then it is automatically a linearly independent set.  So, an orthogonal/orthonormal set is always a basis for the subspace it spans.

Examples of orthonormal basis:

$$\vec{e_{1}},...,\vec{e_{n}}$$

Orthonormal basis for $R^n$

-----------------------------------------------------------------------------------------------------------------

**Coefficients with an Orthonormal Basis**

If $\vec{v_{1}},..., \vec{v_{p}}$ is a basis for a subspace $W$, we know that for any $\vec{w}$ in $W$, there are unique scalars $a_{1},..., \vec{a_{p}}$ so that $w = a_{1} \vec{v_{1}} + ... + a_{p} \vec{v_{p}}$

Moreover, if $\vec{v_{1}},..., \vec{v_{p}}$ is an orthonormal basis, we have:

$$a_{i} = \vec{w} * \vec{v_{i}}$$


This measures how much of $\vec{w}$ lies in the $\vec{v_{i}}$ direction.

With a non orthonormal basis we had to solve the vector equation by solving the corresponding augmented matrix.

## - Example of Writing a Vector as a Linear Combination of Orthonormal Basis

$$\vec{w} = proj_{\vec{v_{1}}} \vec{w} + ... + proj_{\vec{v_{p}}} \vec{w}$$

In other words, to express $\vec{w}$ as a linear combination of an orthonormal basis, we project $\vec{w}$ onto each basis vector.

Example: Consider the orthonormal basis for $R^3$:

$$\vec{v_{1}}, \vec{v_{2}}, \vec{v_{3}} = (0, 0, -1), (\frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}}, 0), (\frac{1}{\sqrt{2}}, \frac{-1}{\sqrt{2}}, 0)$$

Write $\vec{w}$ as a linear combination of the $\vec{v_{i}}$'s

$$\vec{w} = proj_{ \vec{v_{1}}} \vec{w} + proj_{ \vec{v_{2}}} \vec{w} + proj_{\vec{v_{3}}} \vec{w}$$

$$proj_{\vec{v_{1}}} \vec{w} = (\vec{w} * \vec{v_{1}}) \vec{v_{1}} = ((1, 2, 3) * (0, 0, -1)) (0, 0, -1) = -3 \vec{v_{1}}$$

$$proj_{\vec{v_{2}}} \vec{w} = (\vec{w} * \vec{v_{2}}) \vec{v_{2}} = ((1, 2, 3) * (\frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}}, 0)) (\frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}}, 0) = \frac{3}{\sqrt{2}} \vec{v_{2}}$$

$$proj_{\vec{v_{3}}} \vec{w} = (\vec{w} * \vec{v_{3}}) \vec{v_{3}} = ((1, 2, 3) * (\frac{1}{\sqrt{2}}, \frac{-1}{\sqrt{2}}, 0)) (\frac{1}{\sqrt{2}}, \frac{-1}{\sqrt{2}}, 0) = \frac{-1}{\sqrt{2}} \vec{v_{3}}$$

$$\vec{w} = -3\vec{v_{1}} + \frac{3}{\sqrt{2}} \vec{v_{2}} + \frac{-1}{\sqrt{2}} \vec{v_{3}}$$

## - Eigenspaces

Suppose $\lambda$ is an eigenvalue of $A$.  Then the eigenspace corresponding to $\lambda$ is the set containing all corresponding eigenvectors as well as $\vec{0}$.  

That is, the eigenspace of $\lambda$ contains all solutions to $det(A - \lambda I_{n}) = 0$

Example: Find all the eigenvalues and corresponding eigenspaces to

$$A = \begin{bmatrix} 4 & 2 & 3 \\\ -1 & 1 & -3 \\\ 2 & 4 & 9 \end{bmatrix}$$

The characteristic polynomial after calculating is: $(\lambda - 3)^2 (\lambda - 8) = 0$

$\lambda_{1} = 3$

Subtract along diagonal and solve augmented matrix:

The parametric vector solution is:

$$\vec{v} = s \begin{bmatrix} -3 \\\ 0 \\\ 1 \end{bmatrix} + t \begin{bmatrix} -2 \\\ 1 \\\ 0 \end{bmatrix}$$

The Eigenspace is the span of these vectors

Now do $\lambda_{2} = 8$

$$\vec{v} = s \begin{bmatrix}  1 \\\ -1 \\\ 2 \end{bmatrix}$$

The corresponding eigenspace to this eigenvalue is the span of this vector.

-----------------------------------------------------------------------------------------------------------------

## - Eigenbasis

**Linearly Independent Eigenvectors**

Eigenvectors corresponding to distinct eigenvalues are linearly independent.  Even more, different eigenspaces only have the zero vector in common (linearly independent from each other).

From this, we conclude that the dimension of the span of the eigenvectors is equal to the sum of the dimension of the different eigenspaces.

Example:

Using the Eigenvectors of the 3x3 matrix from the previous example.  One eigenvalue had 2 eigenvectors, while the second had 1 eigenvectors.  All of these eigenvectors are linearly independent from each other.  All of the vectors are 3 dimensional and live in $R^3$

The collection of all three of these vectors forms an eigenbasis for $R^3$

Keep in mind an eigenbasis does not always exist.  If the eigenvectors don't span all of $R^n$ then it won't form an eigenbasis.

## - Using an Eigenbasis to iterate a Linear Transformation

Example: Suppose that 60% of juveniles produce offspring each year, 80% of adults produce offspring, and 90% of juveniles survive to adulthood the next year.  No adults live past 2 years.

The population matrix is:

$$A = \begin{bmatrix} 0.6 & 0.8 \\\ 0.9 & 0 \end{bmatrix}$$

If the initial population vector:

$$\vec{x_{0}} = \begin{bmatrix} J_{0} \\\ A_{0} \end{bmatrix}, \vec{x_{n}} = T^{(n)}(x_{0}) = A^n \vec{x_{0}}$$

Suppose:

$$\vec{x_{0}} = \begin{bmatrix} 400 \\\ 300 \end{bmatrix}$$

Notice that $\vec{x_{0}}$ is an eigenvector of $A$ with corresponding eigenvalue $\lambda = 1.2$  What is $\vec{x_{n}}$$

$$\vec{x_{n}} = \lambda^n \vec{x_{0}} = (1.2)^n \begin{bmatrix} 400 \\\ 300 \end{bmatrix}$$

Building a matrix like this is easy with an eigenvector.

-----------------------------------------------------------------------------------------------------------------

**Linear Transformations in terms of an eigenbasis**

$$T^{(n)} (\vec{x}) = a_{1}\lambda^n_{1} \vec{v_{1}} + ... + a_{m}\lambda^n_{m} \vec{v_{m}}$$

## - Example of using an eigenbasis for Population Matrices

The eigenvalues are: $\lambda_{1} = 1.2, \lambda_{2} = -0.6$ with corresponding eigenvectors $\vec{v_{1}} = (4, 3), \vec{v_{2}} = (2, -3)$

Initial population vector is: $\vec{x_{0}} = (6, -3)$.  Notice that $\vec{x_{0}} = \vec{v_{1}} + 2\vec{v_{2}}$

Using the above properties: 

$$\vec{x_{n}} = T^{(n)}(\vec{x_{0}}) = T^{(n)}(\vec{v_{1}} + 2\vec{v_{2}})$$

$$= T^{(n)}(\vec{v_{1}}) + 2T^{(n)}(\vec{v_{2}})$$

$$= \lambda^n_{1}\vec{v_{1}} + 2\lambda^n_{2}\vec{v_{2}}$$

$$= (1.2)^n \begin{bmatrix} 4 \\\ 3 \end{bmatrix} + 2(-0.6)^n \begin{bmatrix} 2 \\\ -3 \end{bmatrix}$$

## - Long term behavior of Population Matrices

Using the formula we got for $\vec{x_{n}}$

Factor out $(1.2)^n$

$$= (1.2)^n( \begin{bmatrix} 4 \\\ 3 \end{bmatrix} + 2(-0.5)^n \begin{bmatrix} 2 \\\ 3 \end{bmatrix}$$

The population grows/goes to infinity. 4/7 of the population will account for juveniles while 3/7 will account for adults.  

The dominant eigenvalue tells the long term behavior of the population growth rate.

If: 

$\lambda_{1} > 1$: Population grows

$\lambda_{1} < 1$: Population decays

$\lambda_{1} = 1$: Population trends toward a constant value

The corresponding eigenvector determines the long term population distribution, which we find by dividing $\vec{v_{1}}$ by the sum of its entries.


## - Projecting onto a Subspace

Suppose we want to solve $A\vec{x} = \vec{b}$

where:

$$A = \begin{bmatrix} 1 & 1 \\\ 1 & 2 \\\ 1 & 3 \end{bmatrix}, \vec{b} = \begin{bmatrix} 0 \\\ 1 \\\ 3 \end{bmatrix}$$

This equation is inconsistent.

Instead of solving can we find a solution that is close by finding some $\vec{x}$ that minimizes $vec{b}$ from the column space of $A$.

To do this we need to project a vector onto a subspace.

**Projection onto a subspace**

Suppose $W$ is a subspace of $R^n$ and that $\vec{q_{1}},... \vec{q_{m}}$ is any orthogonal basis for $W$.  Then we take the projection of any vector $\vec{v}$ in $R^n$ onto the subspace $W$ by computing:

$$proj_{W} \vec{v} = proj_{\vec{q_{1}}} \vec{v} + ... + proj_{\vec{q_{m}}} \vec{v}$$

This represents how much of $\vec{v}$ lies in $W$.

Example:  Let $\vec{y} = (2, 3, 4)$. Find the projection of $\vec{y}$ onto the xy-plane.

An orthogonal basis for the xy plane: $(1, 0, 0), (0, 1, 0)$

$$proj_{W} \vec{y} = proj_{\vec{e_{1}}} \vec{y} + proj_{\vec{e_{2}}} \vec{y}$$

$$= ((2, 3, 4) * (1, 0, 0)) \vec{e_{1}} + ((2, 3, 4) * (0, 1, 0)) \vec{e_{2}}$$

$$= 2\vec{e_{1}} + 3\vec{e_{2}}$$

$$= (2, 0, 0) + (0, 3, 0) = (2, 3, 0)$$


## - Orthogonal Decomposition

Let $W$ be a subspace of $R^n$.  Then each $\vec{y}$ in $R^n$ can be written uniquely in the form:

$$\vec{y} = \hat{y} + \vec{e}$$

where $\hat{y} = proj_{W} \vec{y}$ and $\vec{e}$, referred to as the error, is orthogonal to $W$.

**The Best Approximation Theorem**

$\hat{y}$ is the closest point in $W$ to $\vec{y}$. That is:

$$||\vec{y} - \hat{y}|| \leq ||\vec{y} - \vec{v}||$$

The distance of $\vec{y}$ to $W$ is given by:

$$||\vec{e}|| = ||\vec{y} - \hat{y}||$$

Example:

Let $W$ span:

$$\begin{bmatrix} 0 \\\ 1 \\\ -4 \\\ -1 \end{bmatrix}, \begin{bmatrix} 3 \\\ 5 \\\ 1 \\\ 1 \end{bmatrix}, \begin{bmatrix} 1 \\\ 0 \\\ 1 \\\ -4 \end{bmatrix}$$

Find the orthogonal decomposition of $\vec{y}$ with respect to $W$, and then find the closest point in $W$ to $\vec{y}$.

$$\vec{y} = \begin{bmatrix} 10 \\\ -8 \\\ 2 \\\ 0 \end{bmatrix}$$

The projection of $\vec{y}$ onmto $W$ was already calculated as:

$$proj_{W} \vec{y} = \begin{bmatrix} 0 \\\ -2 \\\ 4 \\\ -2 \end{bmatrix}$$

$$\vec{y} = \hat{y} + \vec{e}$$

$$\vec{e} = \vec{y} - \hat{y} = \begin{bmatrix} 10 \\\ -6 \\\ -2 \\\ 2 \end{bmatrix}$$

The orthogonal decomposition can be represented by: 

$$\vec{y} = \begin{bmatrix} 0 \\\ -2 \\\ 4 \\\ -2 \end{bmatrix} + \begin{bmatrix} 10 \\\ -6 \\\ -2 \\\ 2 \end{bmatrix}$$



















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

$$\begin{Vmatrix} cos(\theta) \\
  sin(\theta) \end{Vmatrix}^2$$ 

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

A diagonal matrix has 0's everywhere that isn't in the diagonal.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/dc0300c7-debf-466f-a799-274ce17266a1)

Example:


Suppose: 

$$D=\begin{bmatrix} 2 & 0 \\ 
0 & -1 \end{bmatrix}$$ 


Find $D^2$ and $D^5$

Because this matrix is diagonal you can use the property above:

$$D^2=\begin{bmatrix} 2^2 & 0 \\\ 0 & (-1)^2 \end{bmatrix}= \begin{bmatrix} 4 & 0 \\\ 0 & 1 \end{bmatrix}$$

$$D^5=\begin{bmatrix} 2^5 & 0 \\\ 0 & (-1)^5 \end{bmatrix}= \begin{bmatrix} 32 & 0 \\\ 0 & -1 \end{bmatrix}$$


**Diagonalizable Matrices**

An nxn matrix $A$ is diagonalizable if there is an invertible matrix $P$ and diagonal matrix $D$ such that:

$A=PDP^{-1}$

This matrix factorization is reffered to as the diagonalization of $A$.

**Powers of diagonalizable Matrics**

Suppose $A=PDP^{-1}$.  Then, $A^k=PD^kP^{-1}$

## - Computing the Diagonalization

An nxn matrix $A$ is diagonalizable precisely when there is an eigenbasis with eigenvectors $\{\vec{v_{1}},...,\vec{v_{n}}\}$ of $A$ for $R^n$.

If $\lambda_{1},...,\lambda_{n}$ are the corresponding eigenvalues, then:

$$P=\begin{bmatrix} \vec{v_{1}} & \cdots & \vec{v_{n}} \end{bmatrix}$$

(the eigenvectors are in the columns of P).

$$D= \begin{bmatrix} \lambda_{1} & 0 & \cdots & 0 \\
 0 & \lambda_{2} & \cdots & 0 \\
 \vdots & . & \ddots & \vdots \\
 0 & . & . & \lambda_{n} \end{bmatrix}$$

$P^{-1}$ is the inverse matrix of $P$.

Example:

Compute the diagonalization for:

$$A=\begin{bmatrix} \frac{1}{2} & 1 \\\ \frac{1}{2} & 0 \end{bmatrix}$$

Then find a formula for $A^k$.  What is $A^{100}$?

The eigenvalues are $\lambda_{1}=1,\lambda_{2}=\frac{-1}{2}$

The corresponding eigenvectors are 

$$\vec{v_{1}}=\begin{bmatrix} 2 \\\ 1 \end{bmatrix}, \vec{v_{2}}=\begin{bmatrix} -1 \\\ 1 \end{bmatrix}$$


Calculate $P,D$ and $P^{-1}$

$$P=\begin{bmatrix} 2 & -1 \\\ 1 & 1 \end{bmatrix}$$

$$D=\begin{bmatrix} 1 & 0 \\\ 0 & \frac{-1}{2} \end{bmatrix}$$

$$P^{-1}=\frac{1}{2*1-(-1)*1}\begin{bmatrix} 1 & 1 \\\ -1 & 2 \end{bmatrix}=\begin{bmatrix} \frac{1}{3} & \frac{1}{3} \\\ \frac{-1}{3} & \frac{2}{3} \end{bmatrix}$$

Explicitly writting out the diagonalization:

$$A=\begin{bmatrix} 2 & -1 \\\ 1 & 1 \end{bmatrix}\begin{bmatrix} 1 & 0 \\\ 0 & \frac{-1}{2} \end{bmatrix}\begin{bmatrix} \frac{1}{3} & \frac{1}{3} \\\ \frac{-1}{3} & \frac{2}{3} \end{bmatrix}$$

$$A^k=PD^kP^{-1}=\begin{bmatrix} 2 & -1 \\\ 1 & 1 \end{bmatrix}\begin{bmatrix} (1)^k & 0 \\\ 0 & (\frac{-1}{2})^k \end{bmatrix}\begin{bmatrix} \frac{1}{3} & \frac{1}{3} \\\ \frac{-1}{3} & \frac{2}{3} \end{bmatrix}$$

$$A^{100}=\begin{bmatrix} 2 & -1 \\\ 1 & 1 \end{bmatrix}\begin{bmatrix} (1)^{100} & 0 \\\ 0 & (\frac{-1}{2})^{100} \end{bmatrix}\begin{bmatrix} \frac{1}{3} & \frac{1}{3} \\\ \frac{-1}{3} & \frac{2}{3} \end{bmatrix}$$

## - Determining When a Matrix is Diagonalizable

An nxn matrix $A$ is diagonalizable when its eigenvectors form a basis (an eigenbasis) for $R^n$.

Example: Determine if the following matrix is diagonalizable:

$$A=\begin{bmatrix} 1 & -1 \\\ 1 & -1 \end{bmatrix}$$

Find $\lambda$'s: $det(A-\lambda I_{n})$

$$\begin{bmatrix} 1-\lambda & -1 \\\ 1 & -1-\lambda \end{bmatrix}=(1-\lambda)(-1-\lambda)-1(-1)=\lambda^2$$

$\lambda=0$ with a multiplicity of 2.

Find Eigenvectors:

$$\begin{bmatrix} 1-0 & -1 & 0 \\\ 1 & -1-0 & 0 \end{bmatrix}=\begin{bmatrix} 1 & -1 & 0 \\\ 0 & 0 & 0 \end{bmatrix}$$

$x_{1}=x_{2}$

$x_{2}=$ free

$$\vec{v}=\begin{bmatrix} x_{2} \\\ x{2} \end{bmatrix}=x_{2}\begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

Span of Eigen Vectors:

$$span=\begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

This does not span all of $R^2$ therefore, no eigen basis and this matrix isn't diagonalizable.

**Further Theory:**

The dimension of an eigenspace is less than or equal the multiplicity of the eigenvalue.  

As a consequence, if $A$ is an nxn matrix where the dimension of each eigenspace equals the multiplicity of each eigenvalue, then $A$ is diagonalizable.

Note: This condition is also necessary for such an eigenbasis to exist.

If the dimension of the eigenspace is equal to the algebraic multiplicity of the corresponding eigenvalue for all eigenvalues of $A$, then $A$ is diagonalizable.

If the dimension of any eigenspace is strictly less than the algebraic multiplicity of the corresponding eigenvalue then $A$ is not diagonalizable.

## - Further examples of determining if a Matrix is diagonalizable

Determine $M$ is diagonalizable

$$M=\begin{bmatrix} 1 & 2 & 3 \\\ 0 & 4 & 5 \\\ 0 & 0 & 6 \end{bmatrix}$$

Find eigenvalues:

$(1-\lambda)(4-\lambda)(6-\lambda)$

$\lambda_{1}=1$

$\lambda_{2}=4$

$\lambda_{3}=6$

Each $\lambda$ has a multiplicity of 1

The dimension of the eigenspace is always at least 1 and the mulitiplicity of each eigenvalue is greater than or equal to the dimension of the eigenspace.

So, The dimension of the span of the eigenvectors associated with each eigenvalue must equal the multiplicity of that eigenvector.

If the multiplicity of $\lambda_{1}=2$ then it must have 2 eigenvectors in its span to be diagonalizable.

$M$ is diagonizable.

**Observation:**

If each eigenvalue has a multiplicity of 1 then we know right there the matrix is diagonalizable.





# WEEK 12: SVD and Abstract Vectors

## - The Singular Value Decomposition (SVD)

The singular values of $A$ are the square roots of the eignevalues of $A^TA$, denoted $\sigma_{1},...,\sigma_{n}$, and they are arranged in decreasing order.  That is:

$$\sigma_{i}= \sqrt{\lambda_{i}}$$

Note:
1. Any two eigenvectors from different eigenspaces of $A^TA$ are orthogonal.
2. The eigenvalues of $A^TA$ are non-negative. 

**Theorem**

Suppose  { $\vec{v_{1}},...,\vec{v_{n}}$ } is an orthonormal basis of $R^n$ consisting of eigenvectors of $A^TA$, arranged so that the corresponding eigenvalues of $A^TA$ satisfy $\lambda_{1} \geq \cdots \geq \lambda_{n} > 0$, and suppose that $A$ has $r$ nonzero singular values.  Then { $A\vec{v_{1}},...,A\vec{v_{r}}$ } is an orthonormal basis for $Col(A)$ and $rank(A)=r$

**How to find the SVD of a matrix**

Let $A$ be an mxn matrix with rank $r$. Then there exists an mxn matrix $\Sigma$ for which the diagonal entries are the first $r$ singular values of $A$, an mxm orthogonal matrix $U$, and an nxn orthogonal matrix $V$ such that:

$$A=U\Sigma V^T$$

$\Sigma$ is built by putting the first $r$ singular values of $A$, $\sigma_{1},...,\sigma_{r}$, along its main diagonal (and zeros elsewhere).

$V$ is an orthogonal matrix with columns corresponding to eigenvectors of $A^TA$ ( $\vec{v_{i}}$ corresponds to $\sigma_{i}^2$ )

$U$ is an orthogonal matrix where the ith column is $\vec{u_{i}}= \frac{A\vec{v_{i}}}{\sigma_{i}}$

Example:

$$A=\begin{bmatrix} -1 & 1 & 3 & 5 & 6 \\\ 3 & -1 & 3 & -1 & 6 \\\ -1 & 3 & -3 & 1 & -6 \end{bmatrix}$$

A singular decomposition of $A$ is given by:

$$\begin{bmatrix} \frac{1}{\sqrt{3}} & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{3}} & \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \\\ \frac{-1}{\sqrt{3}} & \frac{1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \end{bmatrix} \begin{bmatrix} 12 & 0 & 0 & 0 & 0 \\\ 0 & 6 & 0 & 0 & 0 \\\ 0 & 0 & 2 & 0 & 0 \end{bmatrix} \begin{bmatrix} \frac{1}{4\sqrt{3}} & \frac{-1}{4\sqrt{3}} & \frac{3}{4\sqrt{3}} & \frac{1}{4\sqrt{3}} & \frac{6}{4\sqrt{3}} \\\ \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{6}} & 0 & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{2}} & \frac{1}{\sqrt{2}} & 0 & 0 & 0 \\\ \frac{1}{4} & \frac{-1}{4} & \frac{3}{4} & \frac{1}{4} & \frac{-2}{4} \\\ \frac{1}{2} & \frac{-1}{2} & \frac{-1}{2} & \frac{-1}{2} & 0 \end{bmatrix}$$


Notice:

$A$ has the same size as $\Sigma$

$U$ and $V^T$ are orthogonal matrices

The singular values of $A$ go along the diagonal of $\Sigma$ in decreasing order.

What is the rank of $A$?  There are three $\sigma$ values 12, 6 and 2 correspdonding to rank = 3.



What are the eigenvalues of $A^TA$? $12^2, 6^2, 2^2$ These are the three largest eigenvalues of $A^TA$


## - Low rank approximations of matrices using SVD

**Important for Data Compression**

If $A$ is an mxn matrix with rank $r$, then the SVD of $A$. $A=U\Sigma V^T$ is equivalent to writing $A$ as a sum of rank 1 matrices:

$$A= \sigma_{1} \vec{u_{1}} \vec{v_{1}}^T + \cdots + \sigma_{r} \vec{u_{r}} \vec{v_{r}}^T$$

$\sigma_{1} \geq \cdots \geq \sigma_{r} > 0$

**Reduced Rank Approximation**

Keeping the first j terms of the sum above will create a rank j approximation of $A$.

$$A=\begin{bmatrix} -1 & 1 & 3 & 5 & 6 \\\ 3 & -1 & 3 & -1 & 6 \\\ -1 & 3 & -3 & 1 & -6 \end{bmatrix}$$

A singular decomposition of $A$ is given by:


$$\begin{bmatrix} \frac{1}{\sqrt{3}} & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{3}} & \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \\\ \frac{-1}{\sqrt{3}} & \frac{1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \end{bmatrix} \begin{bmatrix} 12 & 0 & 0 & 0 & 0 \\\ 0 & 6 & 0 & 0 & 0 \\\ 0 & 0 & 2 & 0 & 0 \end{bmatrix} \begin{bmatrix} \frac{1}{4\sqrt{3}} & \frac{-1}{4\sqrt{3}} & \frac{3}{4\sqrt{3}} & \frac{1}{4\sqrt{3}} & \frac{6}{4\sqrt{3}} \\\ \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{6}} & 0 & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{2}} & \frac{1}{\sqrt{2}} & 0 & 0 & 0 \\\ \frac{1}{4} & \frac{-1}{4} & \frac{3}{4} & \frac{1}{4} & \frac{-2}{4} \\\ \frac{1}{2} & \frac{-1}{2} & \frac{-1}{2} & \frac{-1}{2} & 0 \end{bmatrix}$$

Find a rank 2 approximation of $A$.

$$A= \sigma_{1} \vec{u_{1}} \vec{v_{1}}^T + \sigma_{2} \vec{u_{2}} \vec{v_{2}}^T$$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/4bddd71e-3616-40b2-aa4b-5aac86612445)


## - Vector Spaces

A vector space is a nonempty set $V$ of objects, called vectors, on which are defined two operations, called addition and multiplication by scalars, subject to the ten axioms below:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/095814da-712e-4f3e-9148-88eccea77e3c)


Example:

The Euclidean spaces $R^n$ are vectors spaces for all $n \geq 1$ Verify $(1), (4), (6)$

1. Take any two vectors and add them together and confirm they are both in the same dimension.

4. The zero vector is a vector with all zeros, adding this to any vector will not change it.

6. Multiplying a vector by a scalar does not change the space the vector lies in.


## - Examples of Vector Spaces

The vector space $M_{2x2}$ consists of all 2x2 matrices:

$$\begin{bmatrix} a_{11} & a_{12} \\\ a_{21} & a_{22} \end{bmatrix} | a_{11}, a_{12}, a_{21}, a_{22} R$$

It is equipped witht the operations: matrix sum and scalar-matrix multiplication.

**Vector Spaces of Polynomials**

The vector space $P_{2}$ consists of all polynomials with degree at most 2:

$$a_{2}x^2+a_{1}x+a_{0} | a_{0}, a_{1}, a_{2}$$

## - Definition of a Subspace

A subspace, $H$, of a vector space $V$ is a subset of $V$ where $H$ is a vector space itself.

To check if something is a subspace of a beigger vector space you dont have to check all of the properties some will be automatic from $H$ just living in $V$ you would have to check 1, 4 and 6.

criteria for a subspace:

1. The zero vector of $V$ is in $H$
2. $H$ is closed under vector addition.  That is, if $\vec{u}$ and $\vec{v}$ are in $H$, then the sum of $\vec{u}+\vec{v}$ is also in $H$.
3. $H$ is closed under scalar multiplication.  That is, if $\vec{u}$ is in $H$ and c is any scalar, then $c\vec{u}$ is also in $H$.

## - Examples/Non-Examples of Subspaces

Show that the subset:

$$\begin{bmatrix} b \\\ b \end{bmatrix} | b$$

is a subspace of $R^2$

This represents all vectors where both components are the same.  So think of:

$$\begin{bmatrix} 1 \\\ 1 \end{bmatrix}, \begin{bmatrix} 0 \\\ 0 \end{bmatrix}, \begin{bmatrix} -5 \\\ -5 \end{bmatrix}$$

We can see the zero vector is in the subspace.

If we added two random vectors the new vector would still meet this criteria of a vector in the subspace.

If you multiplied any vector by any scalar c, the new vector would still be in the subspace.

Example:

Show the subset:

$$\begin{bmatrix} b \\\ 2 \end{bmatrix} | b$$

is not a subspace of $R^2$

You could subsititue any value for b.  The zero vector is not in the subspace so that property fails right away.

Example:

Determine if the subset:

$$\begin{bmatrix} a_{11} & 0 \\\ 0 & a_{22} \end{bmatrix} | a_{11}, a_{22}$$

consisting of all diagonal 2x2 matrices is a subspace of $M_{2x2}$

You could place 0's and get the zero vector.

Adding or multiplying by a scalar still reproduces a diagonal matrix.  So yes this is a subspace.

Example:

Determine if the subset { $H= A|det(A) = 0$ } of $M_{2x2}$ } consisting of all 2x2 matrices where the determinant is 0 is a subspace of $M_{2x2}$.

Determinant of the zero vector is 0 so yes the zero vector is in $H$

To show $H$ is closed under vector addition.  This fails because you can add two 2x2 matrices with a determinant value of 0 and produce a 2x2 matrix with a determinant value of 1.

$$\begin{bmatrix} 1 & 0 \\\ 0 & 0 \end{bmatrix} + \begin{bmatrix} 0 & 0 \\\ 0 & 1 \end{bmatrix} = \begin{bmatrix} 1 & 0 \\\ 0 & 1 \end{bmatrix}$$

## - Subspaces of $R^n$

Example:

Which planes in $R^3$ are subspaces of $R^3$?

If a random plane in $R^3$ does not contain the zero vector (goes through the origin) then it is not a subspace of $R^3$

Example:

Is the set:

$$r \begin{bmatrix} 0 \\\ 2 \\\ 2 \\\ -6 \end{bmatrix} + s \begin{bmatrix} 1 \\\ 2 \\\ 3 \\\ 4 \end{bmatrix} + t \begin{bmatrix} -1 \\\ 0 \\\ 5 \\\ 6 \end{bmatrix}$$

where r, s and t are real numbers a subspace of $R^4$?


Yes, this is a subspace of $R^4$ because it is a span of vectors in $R^4$.













