# MATH 220 LINEAR ALGEBRA TABLE OF CONTENTS
[WEEK 1: Solving Systems of Equations](./MATH220.md#week-1-solving-systems-of-equations)
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

[WEEK 2: Vectors, Span and Linear Independence](./MATH220.md#week-2-vectors-span-and-linear-independence)
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




[WEEK 11: Least Squares Approximation, QR factorization and Diagonalizable Matrices](./MATH220.md#week-11-least-squares-approximation-qr-factorization-and-diagonalizable-matrices)

[WEEK 12: SVD and Abstract Vectors]
- The Singular Value Decomposition (SVD)
- Using SVD to find a low-rank approximation of a matrix
- Vector Space
- Examples of Vector Spaces
- Definition of a Subspace
- Examples of a Subspace
- Subspaces of $R^n$

# Week 1 Solving Systems of Equations

## - What is a Linear System

A linear equation in the variables $x_{1},x_{2}, ...,x_{n}$ is an equation that can be written in the form:

$$a_{1}x_{1}+a_{2}x_{2}+...+a_{n}x_{n}=b$$

where $b$ and the coefficients $a_{1},a_{2},...,a_{n}$ are real numbers.

A system of linear equations (or a linear system) is a collection of one or more linear equations involving the same variables, say $x_{1},...,x_{n}$

Example:

$x_{1} + 2x_{2} - x_{3}=4$

$2x_{1} + x_{2} + 5 x_{3}=0$

$-x_{1} - 3x_{2} +x_{3}=-1$

This is now a system of linear equations.

A **solution** of a linear system is a list of numbers that make each equation a true statement when these numbers are substituted for $x_{1},x_{2},...,x_{n}$

The set of all possible solutions is called the **solution set** of the linear system.

## - Matrices

A matrix is an ordered rectangular array of numbers, usually enclosed in parenthesis or square brackets.

The size of a matrix is specified by the number of rows and the number of columns.

An $m$ x $n$ matrix has m rows and n columns.

Example of a $2x3$ matrix:

$$A=\begin{bmatrix} 1 & 2 & 3 \\\ 4 & 5 & 6 \end{bmatrix}$$

**Entries of a Matrix**

We use $a_{ij}$ to denote the entry of the $i$ th row and $j$ th column of $A$

**General notation of a matrix**

$$\begin{bmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\
 a_{21} & a_{22} & \cdots & a_{2n} \\
 \vdots & \vdots & \ddots \\
 a_{m1} & a_{m2} & \cdots & a_{mn} \end{bmatrix}$$

Consider the system:

$x_{1} - 2x_{2}=1$

$3x_{1} + 2x_{2}=11$

The coefficient matrix of the linear system is:

$$\begin{bmatrix} 1 & -2 \\\ 3 & 2 \end{bmatrix}$$

The augmented matrix is:

$$\begin{bmatrix} 1 & -2 & 1 \\\ 3 & 2 & 11 \end{bmatrix}$$

The coefficients for the first column of the matrix correspond to $x_{1}$ while the second column of coefficents corresponds to $x_{2}$

## - Elementary Row Operations

Three main Operations:
1. Replacement
2. Scaling
3. Interchange

**Replacement**

Replaces one row by the sum of itself and a multiple of another row.

Example:

$2x - 3y = -6$

$4x + 5y = 10$


$$\begin{bmatrix} 2 & -3 & -6 \\\ 4 & 5 & 10 \end{bmatrix} R2\to R2 - 2R1$$

Now becomes:

$$\begin{bmatrix} 2 & -3 & -6 \\\ 0 & 11 & 22 \end{bmatrix}$$

**Scaling**

Multiples all entries in a row by a nonzero constant.  Used to solve for a single variable.

$$\begin{bmatrix} 2 & -3 & -6 \\\ 0 & 11 & 22 \end{bmatrix} R2\to \frac{R2}{11}$$

Becomes:

$$\begin{bmatrix} 2 & -3 & -6 \\\ 0 & 1 & 2 \end{bmatrix}$$

**Interchanging**

Used to change the position of leading entries

All you do is swap entire rows with each other if neccessary

$$\begin{bmatrix} 0 & 1 & 2 \\\ 2 & -3 & -6 \end{bmatrix} R1\leftrightarrow R2 \begin{bmatrix} 2 & -3 & -6 \\\ 0 & 1 & 2 \end{bmatrix}$$


**Solving a system of equations using row operations**

Example: Solve the following using row operations:

$x_{1} + 5x_{2}= 7$

$-2x_{1} - 7x_{2}= -5$

Put into an augmented matrix:

$$\begin{bmatrix} 1 & 5 & 7 \\\ -2 & -7 & -5 \end{bmatrix}$$

$R2\to R2 +2R1$

$$\begin{bmatrix} 1 & 5 & 7 \\\ 0 & 3 & 9 \end{bmatrix}$$

Note: This matrix is now in echelon form.

$R2\to \frac{R2}{3}$

$$\begin{bmatrix} 1 & 5 & 7 \\\ 0 & 1 & 3 \end{bmatrix}$$

$R1\to R1 - 5R2$

$$\begin{bmatrix} 1 & 0 & -8 \\\ 0 & 1 & 3 \end{bmatrix}$$

Note: This matrix is now in reduced echelon form.

This translates to:

$x_{1}= -8$

$x_{2}= 3$

**Echelon and Reduced Echelon Form**

The leading entry of a row in a matrix is the first nonzero entry in the row

$$\begin{bmatrix} 1 & 2 & 3 \\\ 0 & 0 & 4 \\\ 0 & 0 & 0 \end{bmatrix}$$

The leading entries are 1 and 4 with the third row not having a leading entry.

Properties of Echelon form:
1. All non zero rows are above any rows of all zeros

$$\begin{bmatrix} 1 & -2 & 1 \\\ 0 & 8 & 8 \\\ 0 & 0 & 0 \end{bmatrix}$$

2. Each leading entry of a row is in a column to the right of the leading entry in the row above it.

$$\begin{bmatrix} 1 & -2 & 1 \\\ 0 & 8 & 8 \\\ 0 & 0 & 2 \end{bmatrix}$$

Properties of Reduced Echelon form (RREF) have the additional conditions:
1. The leading entry in each non zero row is a 1


2. Each leading 1 is the only non zero entry in its column.

RREF Example:

$$\begin{bmatrix} 1 & 0 & 3 \\\ 0 & 1 & 1 \end{bmatrix}$$

## - Pivots

A pivot position in a matrix $A$ is a location in $A$ that corresponds to a leading 1 in the reduced echelon form of $A$ or a leading entry in an echelon form of $A$.

- A Pivot column is a column that contains a pivot
- A pivot is a number in a pivot position. Always a nonzero number.

Example:

$$\begin{bmatrix} 2 & 4 & -2 & 2 \\\ 0 & 0 & 1 & 4 \end{bmatrix}$$

The pivots are 2 and 1 and the pivot columns are column 1 and 3.


## - Gauss Jordan Elimination

This is a row reduction algorithm used to reduce a matrix to reduced echelon form.
- Steps 1-4 produces a matrix in echelon form
- Step 5 puts matrix into RREF

1. Step 1: Begin with the leftmost nonzero column.  This is a pivot column and the pivot position is at the top.

2. Step 2: Select a nonzero entry in the pivot column as a pivot.  If necessary, interchange rows to move this entry to the pivot position.

3. Step 3: Use row replacement operations to create zeros in all positions below the pivot.

4. Step 4: Cover the row containing the pivot position and cover all rows above it.  Apply steps 1-3 to the submatrix that remains.  Repeat until there are no more nonzero rows to modify.

5. Step 5: Beginning with the rightmost pivot and working upward and to the left, create zeros above each pivot.  If a pivot is not 1, make it a 1 using a scaling operation.

## - Interpolating Polynomials

Example. Find the RREF of the augmented matrix corresponding to this linear system using Gauss Jordan Elimination:

$$2x + 4y - 2z = 2$$

$$4x + 9y - 3z = 8$$

$$-2x - 3y + 7z = 10$$

Put into an augmented matrix:

$$\begin{bmatrix} 2 & 4 & -2 & 2 \\\ 4 & 9 & -3 & 8 \\\ -2 & -3 & 7 & 10 \end{bmatrix}$$

$R2\to R2 - 2R1$

$R3\to R3 + R1$

$$\begin{bmatrix} 2 & 4 & -2 & 2 \\\ 0 & 1 & 1 & 4 \\\ 0 & 1 & 5 & 12 \end{bmatrix}$$

$R3\to R3 - R2$

$$\begin{bmatrix} 2 & 4 & -2 & 2 \\\ 0 & 1 & 1 & 4 \\\ 0 & 0 & 4 & 8 \end{bmatrix}$$

Now in echelon form.  Now work from right to left for RREF.

$R3\to \frac{R3}{4}$

$R1\to \frac{R1}{2}$

$$\begin{bmatrix} 1 & 2 & -1 & 1 \\\ 0 & 1 & 1 & 4 \\\ 0 & 0 & 1 & 2 \end{bmatrix}$$

$R1\to R1 + R3$

$R2\to R2 - R3$

$$\begin{bmatrix} 1 & 2 & 0 & 3 \\\ 0 & 1 & 0 & 2 \\\ 0 & 0 & 1 & 2 \end{bmatrix}$$

$R1\to R1 - 2R2$

$$\begin{bmatrix} 1 & 0 & 0 & -1 \\\ 0 & 1 & 0 & 2 \\\ 0 & 0 & 1 & 2 \end{bmatrix}$$

Now in RREF.

Solution to the system: $x = -1, y = 2, z = 2$

**Application example**  

Suppose experimental data is represented by a set of points in the plane.  An interpolating polynomial for the data is a polynomial whose graph passes through every point.

Find the interpolating polynomial $y = ax^2 + bx + c$ for the data $(1,12),(2,15)$ and $(3,16)$.

Plug in each point into the equation to form a system of equations:

$(1,12)$:  $a + b + c = 12$

$(2,15)$:  $4a + 2b +c = 15$

$(3,16)$:  $9a + 3b + c = 16$

Place in an augmented matrix and solve:

$$\begin{bmatrix} 1 & 1 & 1 & 12 \\\ 4 & 2 & 1 & 15 \\\ 9 & 3 & 1 & 16 \end{bmatrix}$$

After solving with row operations:

$$\begin{bmatrix} 1 & 0 & 0 & -1 \\\ 0 & 1 & 0 & 6 \\\ 0 & 0 & 1 & 7 \end{bmatrix}$$

$$a = -1, b = 6, c = 7$$

$$y = -x^2 + 6x + 7$$

## - Identifying inconsistent Systems

A linear system can have:
1. No solutions
2. One Unique solution
3. Infinitely many solutions

If there are no solutions then the system is inconsistent.  A system is considered consistent if it either has a unique or infinite solutions.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/58184f8b-0037-4ab1-a8bc-c484f965591a)

**Identifying an inconsistent system**

A linear system is inconsistent when an echelon form of the augmented matrix has a row in the form:

$$\begin{bmatrix} 0 & 0 & 0 & \cdots & 0 & | & k \end{bmatrix}$$

where k is nonzero.

## - Systems with infinite many solutions

Find the solution set of a linear system where the reduced matrix is:

$$\begin{bmatrix} 1 & 0 & -3 & 0 & 8 & 11 \\\ 0 & 1 & -6 & 0 & 5 & 7 \\\ 0 & 0 & 0 & 1 & -4 & 22 \end{bmatrix}$$

The solution set:

$$x_{1} = 11 + 3x_{3} - 8x_{5}$$

$$x_{2} = 7 + 6x_{3} - 5x_{5}$$

$$x_{4} = 22 + 4x_{5}$$

In this case $x_{3}$ and $x_{5}$ can be any real number.

This implies that there are infintely many solutions.

Tuple form of the solution set:

$$(x_{1},x_{2},x_{3},x_{4},x_{5})$$

$$=(11+3x_{3}-8x_{5},7+6x_{3}-5x_{5},x_{3},22+4x_{5},x_{5})$$

This is the general solution if you wanted a specific solution set $x_{3}$ and $x_{5}$ to any value.

**Identifying when there are infinite many solutions**

Once an augmented matrix has been converted to an echelon form, the variables corresponding to the pivot columns are called basic variables.  All other variables are called free variables.  If a linear system is consistent, then the presence of a free variable indicates it has infinitely many solutions.

In the previous example $x_{3}$ and $x_{5}$ are both free variables because there isn't a pivot in there respective column.

## - Systems with Unique Solutions and Summary of Solution Set Types

**Unique Solutions**

A consistent linear system has a unique solutions when there is a pivot in every column of the coefficient matrix.

Note: You can determine this once the matrix is in echelon form.

This means there are no free variables, every variable is a basic variable with a specific value.

$$\begin{bmatrix} 1 & 0 & 0 & 2 \\\ 0 & 1 & 0 & 3 \\\ 0 & 0 & 1 & 4 \end{bmatrix}$$

In this case the unique solution is $x = 2, y = 3, z = 4$

# Week 2 Vectors, Span and Linear Independence

## - Vectors and Vector Addition

$R^2$ represents a Euclidean space in the second dimension.

**Vectors in $R^n$**

If $n$ is a positive integer, a list $v_{1},v_{2},...,v_{n}$ of real numbers produces an $n$ -dimensional vector:

$$\vec{v}=\begin{bmatrix} v_{1} \\\ v_{2} \\\ \vdots \\\ v_{n} \end{bmatrix}$$

Another notation: $(v_{1},v_{2},...,v_{n})$

What we have is a matrix notation column vector and a tuple notation vector.

**Vector Addition**

We define the sum of vectors $\vec{v}$ and $\vec{w}$:

$$\vec{v} + \vec{w}=\begin{bmatrix} v_{1} \\\ v_{2} \\\ \vdots \\\ v_{n} \end{bmatrix} + \begin{bmatrix} w_{1} \\\ w_{2} \\\ \vdots \\\ w_{n} \end{bmatrix}= \begin{bmatrix} v_{1} + w_{1} \\\ v_{2} + w_{2} \\\ \vdots \\\ v_{n} + w_{n} \end{bmatrix}$$

Addition of vectors is as simple as adding there components together.

**Geometric interpretation of vector sum in $R^2$**

Geometrically, we add vectors using the Parallelogram Law:  $\vec{v} + \vec{w}$ lies along the diagonal of the parallelogram with side $\vec{v}$ and $\vec{w}$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/d421fbf9-c7fb-4647-ab59-ce3b1b7fa4d9)

## - Scalar Multiplication of Vectors and Algebraic Properties

**Scalar Multiplication**

Suupose $c$ is a scalar and $\vec{v}$ is a vector, then:

$$c\vec{v}=c \begin{bmatrix} v_{1} \\\ v_{2} \\\ \vdots \\\ v_{n} \end{bmatrix} = \begin{bmatrix} cv_{1} \\\ cv_{2} \\\ \vdots \\\ cv_{n} \end{bmatrix}$$

**Geometric Interpretations**

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/b32016a4-0f3b-4f68-943e-542c66edb7fc)

**List of Algebraic Properties**

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/59c8ab0d-c774-473f-a7df-cbaa91ccb753)

## - Linear Combinations of Vectors

Given $p$ vectors $\vec{a_{1}},\vec{a_{2}},...,\vec{a_{p}}$ in $R^n$ and $p$ scalars $x_{1},x_{2},...,x_{n}$, the vector:

$$\vec{b}=x_{1}\vec{a_{1}} + x_{2}\vec{a_{2}} + \cdots + x_{p}\vec{a_{p}}$$

is called a linear combination of $\vec{a_{1}},\vec{a_{2}},...,\vec{a_{p}}$$ with weights $x_{1},x_{2},...,x_{p}$

Example:

Let,

$$\vec{a_{1}}=\begin{bmatrix} 1 \\\ -2 \\\ -5 \end{bmatrix}, \vec{a_{2}}=\begin{bmatrix} 2 \\\ 5 \\\ 6 \end{bmatrix}, \vec{b}=\begin{bmatrix} 7 \\\ 4 \\\ -3 \end{bmatrix}$$

Can $\vec{b}$ be written as a linear combination of $a_{1}$ and $a_{2}$?

This is asking is there an $x_{1},x_{2}$ so that if they were each multiplied by $\vec{a_{1}},\vec{a_{2}}$ it would equal $\vec{b}$

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/5de333bb-8df2-4119-a597-de69ad4c4729)

We have 3 equivalent equations here with the vector equation at the top.

Solving the augmented matrix results in a consistent system with infinite solutions.

This translates to yes $\vec{b}$ can be written as a linear combination of $a_{1}$ and $a_{2}$

**Vector Equation**

The vector equation:

$$x_{1}\vec{a_{1}} + x_{2}\vec{a_{2}} + \cdots + x_{p}\vec{a_{p}}=\vec{b}$$

has the same solution set as the linear system with augmented matrix:

$$\begin{bmatrix} \vec{a_{1}} & \vec{a_{2}} & \cdots & \vec{a_{p}} & | & \vec{b} \end{bmatrix}$$

Note: The vectors in the matrix are representing columns.

## - Span

Span in $R^2$

Plotting a single vector 

$$\vec{v}=\begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

This is just going to be a line on a 2D plane.  Multiplying by any scalar will extend this line up to infinity.

Adding a second vector:

$$\vec{w}=\begin{bmatrix} -1 \\\ 1 \end{bmatrix}$$

Now $\vec{w}$ with all its scalar multiples being added to $\vec{v}$ will span across all of $R^2$

**Formal definition of span:**

If $\vec{v_{1}},\vec{v_{2}},...,\vec{v_{p}}$ are vectors in $R^n$ the set of all linear combinations of $\vec{v_{1}},\vec{v_{2}},...,\vec{v_{p}}$ is denoted span { $\vec{v_{1}},\vec{v_{2}},...,\vec{v_{p}}$ }

It is referred to as the subspace of $R^n$ spanned by $\vec{v_{1}},\vec{v_{2}},...,\vec{v_{p}}$

Example:

Find 4 vectors in span

$$\begin{bmatrix} 1 \\\ 2 \end{bmatrix}, \begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

So any vector in the form:

$$x_{1} \begin{bmatrix} 1 \\\ 2 \end{bmatrix} + x_{2} \begin{bmatrix} 1 \\\ 1 \end{bmatrix}$$

The scalars could be any number to produce vectors in the span.

## - What does a Span of Vectors Look Like?

The span of vectors in $R^2$ is either:
1. a point (just the origin) This would just be the zero vector
2. a line (a line through the origin) This would be the span of just 1 vector
3. a plane (all of $R^2$) This would be the span of two vectors that don't lie on the same line

The span of vectors in $R^3$
1. a point, 0 vector
2. a line, one vector
3. a plane (a plane in $R^3$) two vectors not on the same line
4. 3D space (all of $R^3$) Three vectors not on the same plane

## - Linear Independence

If a vector $\vec{v_{p}}$ can be written as a linear combination of $\vec{v_{1}},\vec{v_{2}},...,\vec{v_{p-1}}$ then,

$\vec{v_{p}}$ is redundent and does not add to the span.

Consider the span:

$$\begin{bmatrix} 1 \\\ 1 \\\ 0 \end{bmatrix}, \begin{bmatrix} 2 \\\ 0 \\\ 1 \end{bmatrix}, \begin{bmatrix} 4 \\\ 2 \\\ 1 \end{bmatrix}$$

The first two vectors can be multiplied by 2 and 1 respectively and added together to make the third vector.

$$2 \begin{bmatrix} 1 \\\ 1 \\\ 0 \end{bmatrix} + \begin{bmatrix} 2 \\\ 0 \\\ 1 \end{bmatrix} = \begin{bmatrix} 4 \\\ 2 \\\ 1 \end{bmatrix}$$

This third vector is considered redundent because it does not add to the span of $R^3$

A set of vectors in $R^n$ is linearly dependent if for some scalar one set of vectors is a linear combination of the other vecotrs in the set.

If this isn't the case the set of vectors is linearly independent.

**Equivelent definition for linear independence/dependence**

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/845d36bb-e377-4c63-81ad-d0ba7984d8a9)

Basically if the only solution to the system of equations equaling the zero vector is when all scalars are set to zero means the set is linearly independent.

This is known as the trivial solution.


## - Pivot Test for Linear Independence/Dependence

You can't always immediately tell from a set if it is dependent or not:

Set 1:

$$\begin{bmatrix} 0 \\\ 1 \\\ 5 \end{bmatrix}, \begin{bmatrix} 1 \\\ 2 \\\ 8 \end{bmatrix}, \begin{bmatrix} 4 \\\ -1 \\\ 0 \end{bmatrix}$$

Are there non-zero solutions to:

$$c_{1} \begin{bmatrix} 0 \\\ 1 \\\ 5 \end{bmatrix} + c_{2} \begin{bmatrix} 1 \\\ 2 \\\ 8 \end{bmatrix} + c_{3} \begin{bmatrix} 4 \\\ -1 \\\ 0 \end{bmatrix} = \vec{0}$$

Put into an augmented matrix and solve:


$$\begin{bmatrix} 0 & 1 & 4 & 0 \\\ 1 & 2 & -1 & 0 \\\ 5 & 8 & 0 & 0 \end{bmatrix}$$

Reduce to echelon form:

$$\begin{bmatrix} 1 & 2 & -1 & 0 \\\ 0 & 1 & 4 & 0 \\\ 0 & 0 & 13 & 0 \end{bmatrix}$$

Notice there is a pivot in every column meaning there is one unique solution:

The unique solution to this augmented matrix must be formed by setting each scalar to 0 to produce the $\vec{0}$ vector.

If there was no pivot in the third column and the last row was all zero's such as in this case:

$$\begin{bmatrix} 1 & 4 & 2 & 0 \\\ 0 & -3 & -3 & 0 \\\ 0 & 0 & 0 & 0 \end{bmatrix}$$

This indicates there are infinte many solutions which also corresponds to linear dependence (non zero solutions).

Finding the dependence relation:

Convert to RREF:

$$\begin{bmatrix} 1 & 0 & -2 & 0 \\\ 0 & 1 & 1 & 0 \\\ 0 & 0 & 0 & 0 \end{bmatrix}$$

Solve for basic variables in terms of the free variable $c_{3}$

$$c_{1}=2c_{3}$$

$$c_{2}=-c_{3}$$

$$c_{3}=c_{3}$$

Solution Set: $(2c_{3}, -c_{3}, c_{3})$

Pick any nonzero number to replace with $c_{3}$ in this case we'll pick 1.

Now our set is $(2, -1, 1)$ meaning if you use these as scalar multiples on each vector and add them together it will equal $\vec{0}$


Summary:

If $A$ has a pivot free column it is linearly Dependendent

If $A$ has pivots in every column it is linearly independent









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

$$A=U\Sigma V$$

$\Sigma$ is built by putting the first $r$ singular values of $A$, $\sigma_{1},...,\sigma_{r}$, along its main diagonal (and zeros elsewhere).

$V$ is an orthogonal matrix with columns corresponding to eigenvectors of $A^TA$ ( $\vec{v_{i}}$ corresponds to $\sigma_{i}^2$ )

$U$ is an orthogonal matrix where the ith column is $\vec{u_{i}}= \frac{A\vec{v_{i}}}{\sigma_{i}}$

Example:

$$A=\begin{bmatrix} -1 & 1 & 3 & 5 & 6 \\\ 3 & -1 & 3 & -1 & 6 \\\ -1 & 3 & -3 & 1 & -6 \end{bmatrix}$$

A singular decomposition of $A$ is given by:

$$\begin{bmatrix} \frac{1}{\sqrt{3}} & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{3}} & \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \\\ \frac{-1}{\sqrt{3}} & \frac{1}{\sqrt{6}} & \frac{1}{\sqrt{2}} \end{bmatrix} \begin{bmatrix} 12 & 0 & 0 & 0 & 0 \\\ 0 & 6 & 0 & 0 & 0 \\\ 0 & 0 & 2 & 0 & 0 \end{bmatrix} \begin{bmatrix} \frac{1}{4\sqrt{3}} & \frac{-1}{4\sqrt{3}} & \frac{3}{4\sqrt{3}} & \frac{1}{4\sqrt{3}} & \frac{6}{4\sqrt{3}} \\\ \frac{-1}{\sqrt{6}} & \frac{1}{\sqrt{6}} & 0 & \frac{2}{\sqrt{6}} & 0 \\\ \frac{1}{\sqrt{2}} & \frac{1}{\sqrt{2}} & 0 & 0 & 0 \\\ \frac{1}{4} & \frac{-1}{4} & \frac{3}{4} & \frac{1}{4} & \frac{-2}{4} \\\ \frac{1}{2} & \frac{-1}{2} & \frac{-1}{2} & \frac{-1}{2} & 0 \end{bmatrix}$$




