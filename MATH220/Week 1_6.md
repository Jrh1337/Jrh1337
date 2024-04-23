# Week 1-6 Linear Algebra Table of Contents
----------------------------------------------------------------------------------------------


[WEEK 1: Solving Systems of Equations](./Week%201_6.md#week-1-solving-systems-of-equations)
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

[WEEK 2: Vectors, Span and Linear Independence](./Week%201_6.md#week-2-vectors-span-and-linear-independence)
- Vectors and Vector Addition
- Scalar Multiplication of Vectors and Properties
- Linear Combinations and Vector Equations
- Span
- Linear Independence
- Pivot Test for Linear Independence/Dependence

[WEEK 3: Basis, Matrix-Vector Products and Population Modeling](./Week%201_6.md#week-3-basis-matrix-vector-products-population-modeling)
- Basis for the subspaces of $R^n$
- Using Basis/Pivots to Describe a Span
- Defining a Basis
- The Matrix Vector Product
- Properties of the Matrix Vector Product
- The Matrix Equation
- Linear Population Model
- Linear Difference Equations
- Setting up a Population Transistion Matrix

[WEEK 4: Column and Null Space, Rank and Nullity, Homogeneous vs. Non Homogeneous](./Week%201_6.md#week-4-column-and-null-space-rank-and-nullity-homogenous-and-non-homogenous-equations)
- The Column Space
- Rank of a Matrix
- Parametric Vector Form
- Homogenous Equations and Null Space
- Nullity and Rank-Nullity Theorem
- Non-Homogenous Systems
- Geometry of Solution Sets


[WEEK 5: Linear Transformations](./Week%201_6.md#week-5-linear-transformations)
- Transformations and Linear Transformations
- Properties of Linear Transformations
- The standard Matrix of a Linear Transformation
- Geometric Linear Transformations
- Composition of Geometric Transformations
- Rank and Nullity of a Linear Transformation
- Onto and One-to-one Transformations
- Determining Onto and One-toOne Transformations with Rank/Nullity


[WEEK 6: Matrix Multiplication and other Matrix Operations](./)
- Addition of Matrices and Scalar Multiplication
- Matrix Multiplication for Composition of Linear Transformations
- Computing Matrix Multiplication of 2x2 Matrices
- Matrix Multiplication for any sized Matrix
- Properties of Matrix Multiplication and Matrix Powers
- The Inverse of a Matrix
- Properties of Inverses
- The Transpose of a Matrix



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

Suppose $c$ is a scalar and $\vec{v}$ is a vector, then:

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










# Week 3 Basis, Matrix-Vector Products, Population Modeling

## - Basis for Subspaces of $R^n$

**Can we get rid of redundent vectors?**

We'd like to get rid of redundent vectors which don't add to the span.

If you remove a vector from a linearly independent set then the span decreases in size.

If a set is already linearly independent then the set of vectors is already a basis for the set.

Example:

This set is linearly dependent:

$$\begin{bmatrix} 1 \\\ 2 \\\ 1 \end{bmatrix}, \begin{bmatrix} 3 \\\ 3 \\\ 4 \end{bmatrix}, \begin{bmatrix} 2 \\\ 1 \\\ 3 \end{bmatrix}, \begin{bmatrix} -1 \\\ 1 \\\ -2 \end{bmatrix}$$

Put into augmented matrix and solve:

$$\begin{bmatrix} 1 & 3 & 2 & -1 & 0 \\\ 2 & 3 & 1 & 1 & 0 \\\ 1 & 4 & 3 & -2 & 0 \end{bmatrix}$$

Reduce:

$$\begin{bmatrix} 1 & 0 & -1 & 2 & 0 \\\ 0 & 1 & 1 & -1 & 0 \\\ 0 & 0 & 0 & 0 & 0 \end{bmatrix}$$

Trun into equations:

$$c_{1} + 0c_{2} - c_{3} + 2c_{4}=0, c_{1}=c_{3} - 2c_{4}$$

$$c_{2} + c_{3} - c_{4}=0, c_{2}= -c_{3} +c_{4}$$

General solution:

$$(c_{3} - 2c_{4},-c_{3} + c_{4}, c_{3}, c_{4})$$

Remove pivot free columns to form a linearly independent set, now $v_{1},v_{2}$ form a linearly indpendent set.

The pivot free columns are redundent vectors and do not add to the span.

## - Using basis/pivots to describe a span

Find a basis for the span:

$$\begin{bmatrix} 1 \\\ 2 \\\ 1 \end{bmatrix}, \begin{bmatrix} 3 \\\ 3 \\\ 4 \end{bmatrix}, \begin{bmatrix} 2 \\\ 1 \\\ 3 \end{bmatrix}, \begin{bmatrix} -1 \\\ 1 \\\ -2 \end{bmatrix}$$

Give a geometric description of the span:

Put into augmented matrix and get into echelon form to identify pivots:

$$\begin{bmatrix} 1 & 0 & -1 & 2 & 0 \\\ 0 & 1 & 1 & -1 & 0 \\\ 0 & 0 & 0 & 0 & 0 \end{bmatrix}$$

PIvots in column 1 and 2 correspond to original set:

Basis:

$$\begin{bmatrix} 1 \\\ 2 \\\ 1 \end{bmatrix}, \begin{bmatrix} 3 \\\ 3 \\\ 4 \end{bmatrix}$$

2 vectors in basis means the span is a plane living in $R^3$

The number of vectors in the basis is the dimension of the space living in $R^n$

## - What does a basis really mean?

If a set of vectors is linearly independent therefore it forms a basis for the span of those vectors.

Every vector in the span can be written uniquely as a linear combination of the set.

**The standard basis**

$R^2$:

$$\begin{bmatrix} 1 \\\ 0 \end{bmatrix}, \begin{bmatrix} 0 \\\ 1 \end{bmatrix}$$

$R^3$:

$$\begin{bmatrix} 1 \\\ 0 \\\ 0 \end{bmatrix}, \begin{bmatrix} 0 \\\ 1 \\\ 0 \end{bmatrix}, \begin{bmatrix} 0 \\\ 0 \\\ 1 \end{bmatrix}$$

The vectors can be written as $\vec{e_{n}}$

## - The Matrix Vector Product

**Dot Product**

Example:

$$\vec{v}= \begin{bmatrix} v_{1} \\\ v_{2} \\\ .. \\\ v_{n} \end{bmatrix}, \vec{w}=\begin{bmatrix} w_{1} \\\ w_{2} \\\ .. \\\ w_{n} \end{bmatrix}$$

$$\vec{v} * \vec{w}= v_{1} w_{1} + v_{2} w_{2} +...+ v_{n} w_{n}$$

**Note:** Vectors must have same dimenions or dot product is not defined.

**Matrix Vector products**

If $A$ is an mxn matric and $\vec{x}$ is a vector in $R^n$, then the ith - entry of $A\vec{x}$ is the dot prodct of the ith row of $A$ with $\vec{x}$. $A\vec{x}$ is a vector in $R^m$

Example:

$$\begin{bmatrix} 2 & -3 \\\ 8 & 0 \\\ -5 & 2 \end{bmatrix} \begin{bmatrix} 4 \\\ 7 \end{bmatrix}$$

Note that the first matrix is a 3x2 and vector is 2x1

Number of columns of the first matrix must match the number of rows in the second matrix or vector.

$$\begin{bmatrix} (2, -3) * (4, 7) \\\ (8, 0) * (4, 7) \\\ (-5, 2) * (4, 7) \end{bmatrix}$$

$$=\begin{bmatrix} -13 \\\ 32 \\\ 6 \end{bmatrix}$$

Note that this is a vector in $R^3$

## - The Matrix Equation

Consider the linear system:

$$x_{1} - 2x_{2} = 1$$

$$3x_{1} + 5x_{2} = 19$$

Which can be represented with the augmented matrix:

$$\begin{bmatrix} 1 & -2 & 1 \\\ 3 & 5 & 19 \end{bmatrix}$$

or the vector equation:

$$x_{1} \begin{bmatrix} 1 \\\ 3 \end{bmatrix} + x_{2} \begin{bmatrix} -2 \\\ 5 \end{bmatrix} = \begin{bmatrix} 1 \\\ 19 \end{bmatrix}$$

Which is equal to the matrix equation:

$$\begin{bmatrix} 1 x_{1} & -2 x_{2} \\\ 3 x_{1} & 5 x_{2} \end{bmatrix} = \begin{bmatrix} 1 & -2 \\\ 3 & 5 \end{bmatrix} \begin{bmatrix} x_{1} \\\ x_{2} \end{bmatrix}= \begin{bmatrix} 1 \\\ 19 \end{bmatrix}$$

## - Linear Population Model(Butterfly Example)

Example:

In the Amazon rainforest each month 5% of caterpillars survive and mature into butterflies, each butterfly lays 500 eggs that hatch and become caterpillars, and 40% of butterflies survive.  Caterpillars do not lay eggs.

1. Write equations that determine the number of caterpillars $b_{1}$ and butterflies $b_{2}$ after 1 month, given an initial number $x_{1}$ of caterpillars and $x_{2}$ of butterflies.

caterpillars = $b_{1} = 0x_{1} + 500x_{2}$

Butterflies = $b_{2} = 0.005x_{1} + 0.4x_{2}$

2. Find the matrix euation that corresponds to your linear system.

$$\begin{bmatrix} 0 & 500 \\\ 0.05 & 0.4 \end{bmatrix} \begin{bmatrix} x_{1} \\\ x_{2} \end{bmatrix} = \begin{bmatrix} b_{1} \\\ b_{2} \end{bmatrix}$$

3. Initially, there are 200 caterpillars and 100 butterflies.  Find the number of each one month later.

$x_{1}=$ initial number of caterpillars

$x_{2}=$ initial number of butterflies

$b_{1}=$ caterpillars one month later

$b_{2}=$ butterflies one month later

$$\begin{bmatrix} 0 & 500 \\\ 0.05 & 0.4 \end{bmatrix} \begin{bmatrix} 200 \\\ 100 \end{bmatrix} = \begin{bmatrix} b_{1} \\\ b_{2} \end{bmatrix}$$

Do matrix vector product to get $b_{1},b_{2}$

$$\begin{bmatrix} 50,000 \\\ 50 \end{bmatrix}$$

4. Suppose the trend contiues, how many of each after two months

The new $x_{1},x_{2}$ values become 50,000 and 50

After doing another matrix vector product:

$$\begin{bmatrix} 25,000 \\\ 2,520 \end{bmatrix}$$

## - Linear Difference Equations

Let's see if we can generalize the result of the butterfly population model.

**Modeling a linear dynamical system**

- The initial state of the system is decribed by the vector $\vec{x_{0}}$
- Several features of the system are each measured as discrete time intervals, producing a sequence of vectors $\vec{x_{0}},\vec{x_{1}},\vec{x_{2}} ...$ The entries in $\vec{x_{k}}$ provide information about the status of the system at the time of the kth time measurement.
- Given $\vec{x_{k}}$ we can determine what happens at the $(k+1)$ time interval give the linear difference equation:

$$\vec{x_{k+1}}=A\vec{x_{k}}$$

Example using an SIR model:

During an epidemic the population is classified as susceptible, infected or recovered.  For a particular strain of the flu it is found that over each one week period:

- 5% of the susceptible population becomes infected with the flu and the rest remain susceptible
- 40% of the infected population recovers and the rest remain infected
- 15% of the recovered population becomes susceptible and the rest remain recovered

1. Create a 3x3 matrix $A$ that describes the population's movement between susceptible, infected and recovered states over each one week period.  Begin by selecting an order for the given states, such as state 1 is susceptible (S), state 2 is infected (I), and state 3 is recovered (R).

Fill in the entries of $A$ by letting $a_{ij}$ be the proportion of the population that moves from state i to state j over a single time period.

$$\begin{bmatrix} 0.95 & 0 & 0.15 \\\ 0.05 & 0.6 & 0 \\\ 0 & 0.4 & 0.85 \end{bmatrix}$$

2. A college campus houses 1,001 students.  After Thanksgiving break one student is infected.  Everyone else is considered susceptible.  Find an inital vector $\vec{x_{0}}$ for our student population.

$$\vec{x_{0}}= \begin{bmatrix} S \\\ I \\\ R \end{bmatrix} = \begin{bmatrix} 1000 \\\ 1 \\\ 0 \end{bmatrix}$$

3. Use the difference equation to determine how many students are infected after one week.

$$\vec{x_{1}}=A \vec{x_{0}} = \begin{bmatrix} 0.95 & 0 & 0.15 \\\ 0.05 & 0.6 & 0 \\\ 0 & 0.4 & 0.85 \end{bmatrix} \begin{bmatrix} 1000 \\\ 1 \\\ 0 \end{bmatrix} = \begin{bmatrix} 950 \\\ 50.6 \\\ 0.4 \end{bmatrix}$$

You would round number of student to whole students to match

$$\vec{x_{2}}=A\vec{x_{1}}= \begin{bmatrix} 0.95 & 0 & 0.15 \\\ 0.05 & 0.6 & 0 \\\ 0 & 0.4 & 0.85 \end{bmatrix} \begin{bmatrix} 950 \\\ 50.6 \\\ 0.4 \end{bmatrix} = \begin{bmatrix} 902.56 \\\ 77.86 \\\ 20.58 \end{bmatrix}$$

Number of students infected after two weeks = 78

# Week 4 Column and Null Space, Rank and Nullity, Homogenous and Non-Homogenous Equations

## - The Column Space

Example:

$$A= \begin{bmatrix} 1 & 2 & -1 \\\ 0 & -5 & 15 \end{bmatrix}, \vec{b}= \begin{bmatrix} 4 \\\ 10 \end{bmatrix}$$

Is there an $\vec{x}$ such that $A\vec{x} = \vec{b}$?

Same as solving the augmented matrix:

$$\begin{bmatrix} 1 & 2 & -1 & 4 \\\ 0 & -5 & 15 & 10 \end{bmatrix}$$

Already in echelon form notice system is consistent.  Number of solutions is infinite with presence of a free variable.

The answer is **yes**

Varying over all $\vec{x}$ then $A\vec{x}$ is equal to the span of the columns of $A$

**Definition** 

The span of the columns of $A$ is called the column space of $A$

The previous example is the same as asking if $\vec{b}$ is in the column space of $A$?

$$Col(A)= span \begin{bmatrix} 1 \\\ 0 \end{bmatrix} \begin{bmatrix} 2 \\\ -5 \end{bmatrix} \begin{bmatrix} -1 \\\ 15 \end{bmatrix}$$

## - The Rank of a Matrix

The rank of a matrix $A$ is the dimension of the column space of $A$

$$Col(A)= span \begin{bmatrix} 1 \\\ 0 \end{bmatrix} \begin{bmatrix} 2 \\\ -5 \end{bmatrix} \begin{bmatrix} -1 \\\ 15 \end{bmatrix}$$

Because the last vector is redundent (third column was pivot free), The basis for the span consists of two vectors, so the rank of $A$ is 2.

**Theorem**

Suppose $A$ is an mxn matrix.  The following are equivalent:

1. The columns of $A$ span $R^m$
2. The rank of $A$ is equal to m
3. Each $\vec{b}$ in $R^m$ is in the column space of $A$, can be written as a linear combination of the columns in $A$
4. For each $\vec{b}$ in $R^m$, the matrix equation $A\vec{x}= \vec{b}$ is consistent
5. $A$ has a pivot position in every row

## - Parametric Vector Form

Suppose:

$$A= \begin{bmatrix} 1 & -2 & 1 & -1 \\\ 2 & -3 & 4 & -3 \\\ 3 & -5 & 5 & -4 \\\ -1 & 1 & -3 & 2 \end{bmatrix}$$

Solve $A\vec{x}= \vec{0}$

$$A= \begin{bmatrix} 1 & -2 & 1 & -1 & 0 \\\ 2 & -3 & 4 & -3 & 0 \\\ 3 & -5 & 5 & -4 & 0 \\\ -1 & 1 & -3 & 2 & 0 \end{bmatrix}$$

Reduce:

$$A= \begin{bmatrix} 1 & 0 & 5 & -3 & 0 \\\ 0 & 1 & 2 & -1 & 0 \\\ 0 & 0 & 0 & 0 & 0 \\\ 0 & 0 & 0 & 0 & 0 \end{bmatrix}$$

Notice that $x_{1}, x_{2}$ are basic varaibles

Solve for basic variables:

$$x_{1}= -5x_{3} + 3x_{4}$$

$$x_{2}= -2x_{3} +x_{4}$$

The solution in tuple notation is:

$$\vec{x}= (-5x_{3} + 3x_{4}, -2x_{3} + x_{4}, x_{3}, x_{4})$$

This can be expressed as a column vector:

$$\vec{x}= \begin{bmatrix} -5x_{3} + 3x_{4} \\\ -2x_{3} + x_{4} \\\ x_{3} \\\ x_{4} \end{bmatrix}$$

rewrite into two sperate column vectors and remove variables:

$$x_{3} \begin{bmatrix} -5 \\\ -2 \\\ 1 \\\ 0 \end{bmatrix} + x_{4} \begin{bmatrix} 3 \\\ 1 \\\ 0 \\\ 1 \end{bmatrix}$$

Solution is now in parametric vector form

Here are the steps:

1. Row reduce augmented matrix to echelon form
2. Express each basic variable in terms of free variables
3. Express the solution $\vec{x}$ whose entries depend on free variables, and then decompose into a linear combination using free variables as parameters

## - Homogenous Systems and the Null Space

To be homogeneous a system of linear equations can be writtenin the form:

$$A\vec{x} = \vec{0}$$

A system $A\vec{x} = \vec{b}$ is non-homogeneous if $\vec{b}$ does not equal 0

$A\vec{x}= \vec{0}$ is always consistent because $\vec{x} = \vec{0}$ is a solution.  This is called the trivial solution.

From the previous parametric vector solution used:

$$x_{3} \begin{bmatrix} -5 \\\ -2 \\\ 1 \\\ 0 \end{bmatrix} + x_{4} \begin{bmatrix} 3 \\\ 1 \\\ 0 \\\ 1 \end{bmatrix}$$

How do you get $\vec{x}$ as the 0 vector?

You set $x_{3}$ and $x_{4}$ to = 0.

Any $\vec{x}$ in the span of these two vectors.

The span of these two vectors represents a 2 dimensional subspace (plane) in $R^4$

**Null Space**

This subspace is referred to as the null space of $A$

Definition:  

Suppose $A$ is an mxn matrix.  The solution set to the homogeneous equation $A\vec{x} = \vec{0}$ is a subspace of $R^m$ spanned by the vectors appearing in parametric vector form.  This subspace is reffered to as the null space of $A$

Even better... those vectors form a basis for the solution set


## - Nullity and the Rank Nullity Theorem

When solving $A\vec{x} = \vec{0}$ the number of free variables is the dimension of the solution set

To determine the dimension of the span of the columns of $A$:

- Find the number of linearly independent vectors of the columns of $A$ (# of pivot columns)

To determine the dimension of the solution set of $A\vec{x}= \vec{0}$:

- Find the number of free variables (# of pivot free columns)

The nullity of $A$ is the dimension of the null space of $A$

**Rank-Nullity Theorem**

Suppose $A$ is an mxn matrix. Then:

$$rank(A) + nullity(A) = n$$

Example Problem:

Suppose $A$ is a 5x4 matrix.  What are the possible combinations of rank and nullity of $A$?

All combinations that add to 4, rank can be as small as 0 and big as 4.

## - Non-Homogeneous Systems

Let's solve the non-homogeneous system:

$$x_{1} + 3x_{2} + 0x_{3} + 2x_{4} = 1$$

$$ 0x_{1} + 0x_{2} + x_{3} + 4x_{4} = 6$$

$$x_{1} + 3x_{2} + x_{3} + 6x_{4} = 7$$

$$\begin{bmatrix} 1 & 3 & 0 & 2 & 1 \\\ 0 & 0 & 1 & 4 & 6 \\\ 1 & 3 & 1 & 6 & 7 \end{bmatrix}$$

Reduce:

$$\begin{bmatrix} 1 & 3 & 0 & 2 & 1 \\\ 0 & 0 & 1 & 4 & 6 \\\ 0 & 0 & 0 & 0 & 0 \end{bmatrix}$$

$$x_{1}= 1 - 3x_{2} - 2x_{4}$$

$$x_{3} = 6 - 4x_{4}$$

Parametric vector form:

$$\begin{bmatrix} x_{1} \\\ x_{2} \\\ x_{3} \\\ x_{4} \end{bmatrix} = \begin{bmatrix} 1 - 3x_{2} - 2x_{4} \\\ x_{2} \\\ 6 - 4x_{4} \\\ x_{4} \end{bmatrix} = \begin{bmatrix} 1 \\\ 0 \\\ 6 \\\ 0 \end{bmatrix} + x_{2} \begin{bmatrix} -3 \\\ 1 \\\ 0 \\\ 0 \end{bmatrix} + x_{4} \begin{bmatrix} -2 \\\ 0 \\\ -4 \\\ 1 \end{bmatrix}$$

Notice that we have constants in the vector form now

and compare it to the solution to the homogeneous system:

$$x_{1} + 3x_{2} + 0x_{3} + 2x_{4} = 0$$

$$ 0x_{1} + 0x_{2} + x_{3} + 4x_{4} = 0$$

$$x_{1} + 3x_{2} + x_{3} + 6x_{4} = 0$$

$$\begin{bmatrix} 1 & 3 & 0 & 2 & 0 \\\ 0 & 0 & 1 & 4 & 0 \\\ 1 & 3 & 1 & 6 & 0 \end{bmatrix}$$

Reduce:

$$\begin{bmatrix} 1 & 3 & 0 & 2 & 0 \\\ 0 & 0 & 1 & 4 & 0 \\\ 0 & 0 & 0 & 0 & 0 \end{bmatrix}$$

$$x_{1}= 3x_{2} - 2x_{4}$$

$$x_{3} = 4x_{4}$$

$$\begin{bmatrix} x_{1} \\\ x_{2} \\\ x_{3} \\\ x_{4} \end{bmatrix} = \begin{bmatrix}  3x_{2} - 2x_{4} \\\ x_{2} \\\ 4x_{4} \\\ x_{4} \end{bmatrix} =  x_{2} \begin{bmatrix} -3 \\\ 1 \\\ 0 \\\ 0 \end{bmatrix} + x_{4} \begin{bmatrix} -2 \\\ 0 \\\ -4 \\\ 1 \end{bmatrix}$$

The solution sets are almost identical put in the non homegenous case we have a constant vector being added to the linear combination.

## - Geometric description of Non-Homogeneous Solution Sets

Taking the previous non-homogeneous solution set:

$$\vec{x} = \begin{bmatrix} 1 \\\ 0 \\\ 6 \\\ 0 \end{bmatrix} + x_{2} \begin{bmatrix} -3 \\\ 1 \\\ 0 \\\ 0 \end{bmatrix} + x_{4} \begin{bmatrix} -2 \\\ 0 \\\ -4 \\\ 1 \end{bmatrix}$$

By adding a constant vector to the solution set this is no longer a subspace because all subspaces have to go through the origin.

You can think of this constant vector as shifting this plane that lives in $R^4$ over from the origin.



# Week 5 Linear Transformations

## - Transformations and Linear Transformations

Transformations are mappings/functions from one euclidean space to another (R to R)

Domain represents all the inputs

Codomain represents the outputs

Range is all the values that are mapped to

**Definition**

A transformation (or function or mapping) $T$ from $R^n$ to $R^m$ is labelled $T: R^n \to R^m$ $T$ is a rule that assigns each vector $\vec{x}$ in $R^n$ a vector $T(\vec{x})$ in $R^m$

The set $R^n$ is called the domain of $T$

$R^m$ is the codomain

For $\vec{x}$ in $R^n$ the vector $T(\vec{x})$ is called the image of $\vec{x}$ (under the action of $T$).  The set of all images is called the range of $T$.

**Linear Transformations**

A transformation is linear if:

1. $T(c\vec{u}) = cT(\vec{u})$
2. $T( \vec{u} + \vec{v} ) = T( \vec{u} ) + T( \vec{v} )$

For all vectors $\vec{u},\vec{v}$ and all scalars $c$.

Example:

Determine whether $T(x,y) = (x + y, -2x, y)$

$T: R^2 \to R^3$

$T(1, 2) = (3, -2, 2)$

First property: $T(cx,cy) = (cx +cy, -2(cx), cy)$

$= (c(x + y), c(-2x), cy)$

$= c(x + y, -2x, y)$

$= c(T\vec{u})$

Second Property: $T(\vec{u} + \vec{v}) = T(x_{1} + x_{2}, y_{1} + y_{2}) = ((x_{1} + x_{2}) + (y_{1} + y_{2}), -2(x_{1} + x_{2}), y_{1} + y_{2})$

$= (x_{1} + y_{1}, -2x_{1}, y_{1}) + (x_{2} + y_{2}, -2x_{2}, y_{2})$

## - Properties of Linear Transformations

Example:

Suppose $T$ is a linear transformation such that:

$$T \bigl( \begin{bmatrix} -2 \\\ 4 \end{bmatrix} \bigr) = \begin{bmatrix} 2 \\\ 2 \end{bmatrix}, T \bigl( \begin{bmatrix} 3 \\\ 9 \end{bmatrix} \bigr) = \begin{bmatrix} 6 \\\ -3 \end{bmatrix}$$

Find:

$$T \bigl( \begin{bmatrix} 1 \\\ 8 \end{bmatrix} \bigr) $$

write:

$$\begin{bmatrix} 1 \\\ 8 \end{bmatrix}$$

as a linear combination of:

$$\begin{bmatrix} -2 \\\ 4 \end{bmatrix}$$

and:

$$\begin{bmatrix} 3 \\\ 9 \end{bmatrix}$$

$$\begin{bmatrix} -2 & 3 & 1 \\\ 4 & 9 & 8 \end{bmatrix}$$

solve:

$$\begin{bmatrix} 1 & 0 & \frac{1}{2} \\\ 0 & 1 & \frac{2}{3} \end{bmatrix}$$

$$\frac{1}{2} \begin{bmatrix} -2 \\\ 4 \end{bmatrix} + \frac{2}{3} \begin{bmatrix} 3 \\\ 9 \end{bmatrix} = \begin{bmatrix} 1 \\\ 8 \end{bmatrix}$$

Apply $T$ and use linearity

$$T \bigl( \begin{bmatrix} 1 \\\ 8 \end{bmatrix} \bigr) = T \bigl( \frac{1}{2} \begin{bmatrix} -2 \\\ 4 \end{bmatrix} + \frac{2}{3} \begin{bmatrix} 3 \\\ 9 \end{bmatrix} \bigr)$$

$$T \bigl( \begin{bmatrix} 1 \\\ 8 \end{bmatrix} \bigr) = \frac{1}{2} T \bigl( \begin{bmatrix} -2 \\\ 4 \end{bmatrix} \bigr) + \frac{2}{3} T \bigl( \begin{bmatrix} 3 \\\ 9 \end{bmatrix} \bigr)$$

$$T \bigl( \begin{bmatrix} 1 \\\ 8 \end{bmatrix} \bigr) = \frac{1}{2} \begin{bmatrix} 2 \\\ 2 \end{bmatrix} + \frac{2}{3} \begin{bmatrix} 6 \\\ -3 \end{bmatrix}$$

$$T \bigl( \begin{bmatrix} 1 \\\ 8 \end{bmatrix} \bigr) = \begin{bmatrix} 5 \\\ -1 \end{bmatrix}$$

Example:

Suppose $T: R^3 \to R^2$ is a linear transformation such that:

$$T \bigl( \begin{bmatrix} 1 \\\ 0 \\\ 0 \end{bmatrix} \bigr) = \begin{bmatrix} 2 \\\ 5 \end{bmatrix}, T \bigl( \begin{bmatrix} 0 \\\ 1 \\\ 0 \end{bmatrix} \bigr) = \begin{bmatrix} -1 \\\ -6 \end{bmatrix}, T \bigl( \begin{bmatrix} 0 \\\ 0 \\\ 1 \end{bmatrix} \bigr) = \begin{bmatrix} 1 \\\ -3 \end{bmatrix}$$

Find:

$$T \bigl( \begin{bmatrix} 2 \\\ -3 \\\ 1 \end{bmatrix} \bigr)$$ 

Then find a general formula for $T$.

Write as a linear combination:

$$\begin{bmatrix} 2 \\\ -3 \\\ 1 \end{bmatrix} = 2\vec{e_{1}} - 3\vec{e_{2}} + 1\vec{e_{3}}$$

Apply transformation to both sides:

$$T \bigl( \begin{bmatrix} 2 \\\ -3 \\\ 1 \end{bmatrix} \bigr) = T(2\vec{e_{1}} - 3\vec{e_{2}} + 1\vec{e_{3}})$$ 

Apply linearity to split up sums and pull constants out

$$= T(2\vec{e_{1}} - T(3\vec{e_{2}}) + T(\vec{e_{3}})$$

$$= 2T(\vec{e_{1}}) - 3T(\vec{e_{2}}) + T(\vec{e_{3}})$$

$$= 2 \begin{bmatrix} 2 \\\ 5 \end{bmatrix} - 3 \begin{bmatrix} -1 \\\ -6 \end{bmatrix} + \begin{bmatrix} 1 \\\ -3 \end{bmatrix}$$

$$= \begin{bmatrix} 8 \\\ 25 \end{bmatrix}$$

## - The Standard Matrix of a Linear Transformation

From previous example find a general formula for:

$$T \bigl( \begin{bmatrix} 1 \\\ 0 \\\ 0 \end{bmatrix} \bigr) = \begin{bmatrix} 2 \\\ 5 \end{bmatrix}, T \bigl( \begin{bmatrix} 0 \\\ 1 \\\ 0 \end{bmatrix} \bigr) = \begin{bmatrix} -1 \\\ -6 \end{bmatrix}, T \bigl( \begin{bmatrix} 0 \\\ 0 \\\ 1 \end{bmatrix} \bigr) = \begin{bmatrix} 1 \\\ -3 \end{bmatrix}$$

use a general vector:

$$\begin{bmatrix} x \\\ y \\\ z \end{bmatrix} = x\vec{e_{1}} + y\vec{e_{2}} + z\vec{e_{3}}$$

$$T \bigl( \begin{bmatrix} x \\\ y \\\ z \end{bmatrix} \bigr) = T(x\vec{e_{1}} + y\vec{e_{2}} + z\vec{e_{3}})$$

$$T \bigl( \begin{bmatrix} x \\\ y \\\ z \end{bmatrix} \bigr) = xT(\vec{e_{1}}) + yT(\vec{e_{2}}) + zT(\vec{e_{3}})$$

Plug in known values:

$$T \bigl( \begin{bmatrix} x \\\ y \\\ z \end{bmatrix} \bigr) = x \begin{bmatrix} 2 \\\ 5 \end{bmatrix} + y \begin{bmatrix} -1 \\\ -6 \end{bmatrix}  + z \begin{bmatrix} 1 \\\ -3 \end{bmatrix}$$

$$= \begin{bmatrix} 2x - y + z \\\ 5x -6y -3z \end{bmatrix}$$

rewrite the linear combination as a matrix vector product:

$$= \begin{bmatrix} 2 & -1 & 1 \\\ 5 & 6 & -3 \end{bmatrix} \begin{bmatrix} x \\\ y \\\ z \end{bmatrix}$$

**The Standard Matrix**

Suppose: $T: R^n \to R^m$.  Then there exists an mxn matrix $A$ such that $T(\vec{x}) = A\vec{x}$.

Moreover,

$$A = [ T(\vec{e_{1}}) ... T(\vec{e_{n}}) ]$$

where $\vec{e_{1}}, ... \vec{e_{n}}$ are the standard basis vectors of $R^n$. $A$ is referred to as the standard matrix of $T$.

Example:

Let $T: R^n \to R^m$ where

$$T(\vec{e_{1}}) = \begin{bmatrix} 1 \\\ 2 \\\ 3 \end{bmatrix}, T(\vec{e_{2}}) = \begin{bmatrix} 4 \\\ 5 \\\ 6 \end{bmatrix}$$

Find the standard matrix of $A$ and use this to compute:

$$T \bigl( \begin{bmatrix} 2 \\\ -1 \end{bmatrix} \bigr)$$

$$A= \begin{bmatrix} 1 & 4 \\\ 2 & 5 \\\ 3 & 6 \end{bmatrix}$$

$$T \bigl( \begin{bmatrix} 2 \\\ -1 \end{bmatrix} \bigr) = A \begin{bmatrix} 2 \\\ -1 \end{bmatrix} = \begin{bmatrix} 1 & 4 \\\ 2 & 5 \\\ 3 & 6 \end{bmatrix} \begin{bmatrix} 2 \\\ -1 \end{bmatrix} = \begin{bmatrix} -2 \\\ 1 \\\ 0 \end{bmatrix}$$

The vector calculated is the output of the transformation,

## - Geometric Linear Transformations of $R^2$ Part I: Contractions/Expansion, Shears

**Contractions and Expansions**

Consider the transformation $T(\vec{x})= A\vec{x}$

$$A = \begin{bmatrix} 2 & 0 \\\ 0 & 1 \end{bmatrix}$$

$$\begin{bmatrix} 2 & 0 \\\ 0 & 1 \end{bmatrix} \begin{bmatrix} 1 \\\ 0 \end{bmatrix} = \begin{bmatrix} 2 \\\ 0 \end{bmatrix}$$

$$\begin{bmatrix} 2 & 0 \\\ 0 & 1 \end{bmatrix} \begin{bmatrix} 0 \\\ 1 \end{bmatrix} = \begin{bmatrix} 0 \\\ 1 \end{bmatrix}$$

x component gets scaled by 2 while the y component remains fixed

**Stretches/Shrinks**

$$A= \begin{bmatrix} k & 0 \\\ 0 & 1 \end{bmatrix}$$

- $T$ is a horizontal stretch: if $k > 1$
- $T$ is a horizontal shrink if $0 < k < 1$

If:

$$A = \begin{bmatrix} 1 & 0 \\\ 0 & k \end{bmatrix}$$

- $T$ is a vertical stretch if $k > 1$
- $T$ is a vertical shrink if $0 < k < 1$

**Shears**

Horizontal Shear:

$$A= \begin{bmatrix} 1 & k \\\ 0 & 1 \end{bmatrix}$$

Vertical Shear:

$$A = \begin{bmatrix} 1 & 0 \\\ k & 1 \end{bmatrix}$$


## - Geometric Linear Transformations of $R^2$ Part II: Projections, Reflections and Rotations

Reflection over the y-axis:

$$A= \begin{bmatrix} -1 & 0 \\\ 0 & 1 \end{bmatrix}$$

Reflection over the x-axis:

$$A= \begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix}$$

**Projections**

Projects onto the x-axis (y component disappears):

$$A = \begin{bmatrix} 1 & 0 \\\ 0 & 0 \end{bmatrix}$$

Projects onto y-axis (x component disappears):

$$A = \begin{bmatrix} 0 & 0 \\\ 0 & 1 \end{bmatrix}$$

You can have projections onto other lines that will be learned later


**Rotations**

Counterclockwise rotation standard matrix:

$$A = \begin{bmatrix} cos(\theta) & -sin(\theta) \\\ sin(\theta) & cos(\theta) \end{bmatrix}$$

Example: Find the linear transformation $T$ that rotates vectors counterclockwise by $\frac{\pi}{3}$ Then compute:

$$T \bigl( \begin{bmatrix} 1 \\\ 2 \end{bmatrix} \bigr)$$

$$A = \begin{bmatrix} cos(\frac{\pi}{3}) & -sin(\frac{\pi}{3}) \\\ sin(\frac{\pi}{3}) & cos(\frac{\pi}{3}) \end{bmatrix}= \begin{bmatrix} \frac{1}{2} & - \frac{\sqrt{3}}{2} \\\ \frac{\sqrt{3}}{2} & \frac{1}{2} \end{bmatrix}$$

$$T(\vec{v}) = A\vec{v} = \begin{bmatrix} \frac{1}{2} & - \frac{\sqrt{3}}{2} \\\ \frac{\sqrt{3}}{2} & \frac{1}{2} \end{bmatrix} \begin{bmatrix} v_{1} \\\ v_{2} \end{bmatrix}$$

Subsititute the vector and multiply by the standard transformation matrix to compute the transformation

$$T \bigl( \begin{bmatrix} 1 \\\ 2 \end{bmatrix} \bigr) = \begin{bmatrix} \frac{1}{2} & - \frac{\sqrt{3}}{2} \\\ \frac{\sqrt{3}}{2} & \frac{1}{2} \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$


## - Compositions of Geometric Transformations

Example: Suppose

$$\vec{v} = \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

First rotate the vector counter-clockwise by $\frac{\pi}{2}$ and then reflect the vector over the x-axis.

Rotatation:

$$\vec{v_{1}} = \begin{bmatrix} cos(\frac{\pi}{2}) & -sin(\frac{\pi}{2})\\\ sin(\frac{\pi}{2}) & cos(\frac{\pi}{2}) \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \end{bmatrix} = \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \end{bmatrix} = \begin{bmatrix} -2 \\\ 1 \end{bmatrix}$$

now take $\vec{v_{1}}$ and reflect the vector over the x-axis:

$$\vec{v_{2}} = \begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix} \begin{bmatrix} -2 \\\ 1 \end{bmatrix} = \begin{bmatrix} -2 \\\ -1 \end{bmatrix}$$

Example: Suppose

$$\vec{v} = \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

First reflect the vector over the x-axis and then rotate the vector counter-clockwise by $\frac{\pi}{2}$.

$$\begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix} \begin{bmatrix} 1 \\\ 2 \end{bmatrix} = \begin{bmatrix} 1 \\\ -2 \end{bmatrix}$$

Now rotate $\vec{v_{1}}$ by $\frac{\pi}{2}$

$$\vec{v_{2}} = \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix} \begin{bmatrix} 1 \\\ -2 \end{bmatrix} = \begin{bmatrix} 2 \\\ 1 \end{bmatrix}$$

Note: The order you pass these vectors through the these transformations matters!

## - Rank and Nullity of Linear Transformations

**Understanding linear transformations as Matrix Transformations**

Suppose $T$ is a linear transformation defined by $T(\vec{x}) = A\vec{x}$ where $A$ is an mxn matrix.  Then:

domain of $T$ = $R^n$

Codomain of $T$ = $R^m$

Range of $T$ = $col(A)$

The rank of a linear transformation is the dimension of its range so,

Rank of $T$ = Rank of $A$

The Nullity of $T$ is = to the Nullity of $A$

The null space consists of all vectors that collapse to the zero vector.

Example: Determine the rank and nullity of the transformation $T(\vec{x}) = A\vec{x}$.  Do so in two ways:

1. By interpreting what is happening geometrically/visually in the transformation.
2. By computing the rank and nullity of $A$

$T: R^2 \to R^2$ is the transformation that projects vectors onto the x-axis.

What's out domain and codomain?

The first $R^2$ is the domain and where new vectors are being projected is the second $R^2$ and the codomain.

In this situation all vectors are being projected onto the x-axis.  The only vecotrs that are being sent to 0 is the line on the y-axis.

$$A= \begin{bmatrix} 1 & 0 \\\ 0 & 0 \end{bmatrix}$$

1 pivot: rank = 1

1 Pivot free column: nullity = 1

Column Space: Line along the x-axis

Null Space: Line along y-axis

Ex. 2

$T: R^2 \to R^2$ is the transformation that scales vectors vertically by a factor of 2.

$$A= \begin{bmatrix} 1 & 0 \\\ 0 & 2 \end{bmatrix}$$

2 pivots: rank = 2

0 pivot free: nullity = 0

column space: all of $R^2$

nullspace = just the 0 vector, only the point at the origin is being sent to itself at the origin still.

Ex. 3

$T: R^3 \to R^2$ where,

$$A= \begin{bmatrix} 1 & 0 & 0 \\\ 0 & 1 & 0 \end{bmatrix}$$

Domain: $R^3$

Codomain: $R^2$

Projecting points onto the xy plane.

rank = 2, we are projecting onto the entire xy plane.

nullspace = 1, line along the z-axis is the nullspace

## - Onto and One-to-One linear Transformations

A transformation $T: R^n \to R^m$ is onto if for each $\vec{b}$ in $R^m$, there is a $\vec{x}$  in $R^n$ where $T(\vec{x}) = \vec{b}$.

A linear transformation is onto when the rank of $T$ = $m$.

So basically the range of the transformation = the codomain.

In the previous example that was an onto linear transformation because all the points being projected onto the xy plane filled the entire plane.

The first example of a transformation which projects vectors onto the x-axis is not onto because this projection does not fill all of $R^2$ but the range is only a line on the x-axis.

**One-to-One**

A transformation $T: R^n \to R^m$ is one-to-one if for each $\vec{b}$ there is at most one $\vec{x} \in R^n$ so that $T(\vec{x}) = \vec{b}$

That is, if there is a solution to $T(\vec{x}) = \vec{b}$, the vector $\vec{x}$ is unique.

Basically every single output being projected is unique.

In order for a linear transformation to be considered one-to-one the nullity must be = to 0.

## - Determining one-to-one and onto using Rank and Nullity

Onto: Rank of $T$ must be equal to $m$

One-to-One: Nullity of $T$ equal to 0.  THis is also equivelent to the rank of $T$ being $n$.

Example: Determine whether the standard matrix for each of the following linear transformations is onto or one-to-one.

$$A= \begin{bmatrix} 1 & 0 & 0 \\\ 2 & 1 & 1 \end{bmatrix}$$

After reducing there is two pivots also you can take the dimensions of the matrix to write out your domain and codomain for the transformation $T: R^3 \to R^2$

Note the rank is = 2 which is equal to m but not n.  This tells us right away that this transformation is onto but not one-to-one.



$$A= \begin{bmatrix} 1 & 0 \\\ 0 & 1 \\\ 0 & 1 \end{bmatrix}$$

$T: R^2 \to R^3$

one-to-one but not onto.

$$A= \begin{bmatrix} 1 & 0 & 2 \\\ 0 & 1 & 0 \\\ 0 & 1 & 2 \end{bmatrix}$$

 $T: R^3 \to R^3$

 In this case neither one-to-one or onto.


 # Week 6 Matrix Multiplication and Other Matrix Operations

 ## - Addition of Matrices and Scalar Multiplication

 Addition is straightforward

 Add componentwise:

 $$\begin{bmatrix} 1 & 2 \\\ 3 & 4 \end{bmatrix} + \begin{bmatrix} -1 & 1 \\\ 2 & 2 \end{bmatrix}$$

 $$= \begin{bmatrix} 0 & 3 \\\ 5 & 6 \end{bmatrix}$$

 **Scalar Multiplication**

 $$3 \begin{bmatrix} 1 & 2 \\\ 3 & 4 \end{bmatrix} = \begin{bmatrix} 3 & 6 \\\ 9 & 12 \end{bmatrix}$$

 ![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/d52751c6-b250-45e2-8d39-b5be44cdcc12)

## - Matrix Multiplication for Composition of Linear Transformations

The motivation behind matrix multiplication is to compose linear transformations.

Example:

$$A = \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix},B= \begin{bmatrix} -1 & 0 \\\ 0 & 1 \end{bmatrix}$$

A: Rotates vectors counterclockwise by $\frac{\pi}{2}$

B: Reflects vectors over the y-axis.

Can we find a matrix $C$ so that $T_{C} = T_{B} \circ T_{A}$.  That is, we first rotate counterclockwise, then reflect over the y-axis.  We  call this matrix the product $BA$ of $B$ and $A$

You could send the standard basis vectors and multiply them by A and then the result by B to form the columns of C

Or you could just mulitply the matrices together to form $C$

Order matters when multiplying these matrices if you want the roation of $A$ to occur first then $BA$ must be multiplied.

$$\begin{bmatrix} -1 & 0 \\\ 0 & 1 \end{bmatrix} \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix} = \begin{bmatrix] (-1)(0) + (0)(1) & (-1)(-1) + (0)(0) \\\ (0)(0) + (1)(1) & (0)(-1) + (1)(0) \end{bmatrix}$$

Notice when multiplying matrices together you are multiplying the first row of the left matrix with the first column on the right, then first row of left with second column on the right.  Once out of columns, move on to the next row of the left matrix.

## - Computing Matrix Multiplication of 2x2 Matrices

The product of $B$ with $A$ is the 2x2 matrix:

$$BA= \begin{bmatrix} B\vec{a_{1}} & B\vec{a_{2}} \end{bmatrix}$$

Example:

Find the matrix $C$ so that $T_{C}(\vec{x}) = C\vec{x}$ is the linear transformation that first rotates a vectors counterclockwise by $\frac{\pi}{2}$, then reflects the vector over the x-axis.  Then compute $T_{C}(2,1)$ using the matrix $C$.

$$A = \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix}$$

$$B = \begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix}$$

$A$ rotates and $B$ reflects

$$T_{C} \to T_{B}(T_{A}) \to C = BA$$

$$C = \begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix} \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix} = \begin{bmatrix} 0 & -1 \\\ -1 & 0 \end{bmatrix}$$

$$T_{C}(2,1) = \begin{bmatrix} 0 & -1 \\\ -1 & 0 \end{bmatrix} \begin{bmatrix} 2 \\\ 1 \end{bmatrix} = \begin{bmatrix} -1 \\\ -2 \end{bmatrix}$$

Example:

Find the matrix $D$ so that $T_{D}(\vec{x}) = D\vec{x}$ is the transformation that first reflects a vector over the x-axis, then roatates a vector counterclockwise by $\frac{\pi}{2}$.  Then compute $T_{D}(2,1)$ using the matrix $D$.

Instead of $BA$ do the product of $AB$

$$T_{D} = T_{A}(T_{B})$$

$$D = \begin{bmatrix} 0 & -1 \\\ 1 & 0 \end{bmatrix} \begin{bmatrix} 1 & 0 \\\ 0 & -1 \end{bmatrix} = \begin{bmatrix} 0 & 1 \\\ 1 & 0 \end{bmatrix}$$

$$T_{D}(2,1) = D \begin{bmatrix} 2 \\\ 1 \end{bmatrix} = \begin{bmatrix} 0 & 1 \\\ 1 & 0 \end{bmatrix} \begin{bmatrix} 2 \\\ 1 \end{bmatrix} = \begin{bmatrix} 1 \\\ 2 \end{bmatrix}$$

Note: Matrix Multiplication is not communitive


## - Matrix Multiplication for any Sized Matrix

Let $B$ be an mxp and $A$ be a pxn matrix.  Then the entries of the mxn matrix $BA$ are:

$$BA = \begin{bmatrix} B\vec{a_{1}} & \cdots & B\vec{a_{n}} \end{bmatrix}$$

where $\vec{a_{i}}$ is the ith column of $A$.

**Computing Matrix Multiplication**

Example:

$$\begin{bmatrix} 1 & 2 & 5 \\\ 2 & 4 & 6 \end{bmatrix} \begin{bmatrix} 1 & 1 \\\ 0 & -1 \\\ 2 & 3 \end{bmatrix}$$

notice that the first matrix is a 2x3 and the second is a 3x2.  The product matrix should be 2x2

$$= \begin{bmatrix} (1)(1) + 2(0) + 5(2) & 1(1) + 2(-1) + 5(3) \\\ 2(1) + 4(0) + 6(2) & 2(1) + 4(-1) + 6(3) \end{bmatrix} = \begin{bmatrix} 11 & 14 \\\ 14 & 16 \end{bmatrix}$$

Keep in mind number of columns of the first matrix must be the same number of the rows of the second matrix in order for the product to be defined.

Example:

$$\begin{bmatrix} 1 & 2 & 3 \\\ 2 & 4 & 6 \end{bmatrix} \begin{bmatrix} 2 & 4 \\\ 1 & -5 \end{bmatrix}$$

THE ABOVE PRODUCT WILL NOT WORK/PRODUCT NOT DEFINED


## - Properties of Matrix Multiplication

$AB \neq BA$

Order matters with matrix products

$A(BC)=(AB)C$  Associative

$A(B + C) = AB + AC$

$(B + C)A = BA + CA$

$r(AB) = (rA)B = A(rB)$ associativity wiht scalar multiplication

$I_{m}A = A = AI_{n}$ $A$ is an mxn matrix

**Matrix Powers**

The matrix power $A^p$ is the product of $A$ with itself $p$ times.  That is, 

$$A^p = A \cdots A(p-times)$$

Note: $A$ must be a square matrix.

Example:

$$A = \begin{bmatrix} 1 & 2 \\\ -1 & 1 \end{bmatrix}$$

Compute $A^2$ and $A^3$.

$$A^2=AA= \begin{bmatrix} 1 & 2 \\\ -1 & 1 \end{bmatrix} \begin{bmatrix} 1 & 2 \\\ -1 & 1 \end{bmatrix} = \begin{bmatrix} -1 & 4 \\\ -2 & -1 \end{bmatrix}$$

$$A^3 = A(AA) = AA^2 = \begin{bmatrix} 1 & 2 \\\ -1 & 1 \end{bmatrix} \begin{bmatrix} -1 & 4 \\\ -2 & -1 \end{bmatrix}$$

## - The Inverse of a Matrix

Motivated by ideas coming from linear transformations

For the linear transformation $T: R^n \to R^n$ (domain = codomain) where $T(\vec{x}) = A\vec{x}$, we want to find the inverse transformation $T^{-1}$.  The corresponding matrix is $A^{-1}$

What is $T^{-1}$?

This will undo what $T$ did to the vector.

$$T^{-1}\vec{x} = A^{-1}\vec{x}$$

Example:

Let $A$ be the matrix so that $T(\vec{x}) = A\vec{x}$ is the transformation that rotates the plane counterclockwise by $\frac{\pi}{2}$ Find $A^{-1}$  $T: R^2 \to R^2$

$T^{-1}$ is going to rotate clockwise by $\frac{\pi}{2}$ or counter clockwise by $- \frac{\pi}{2}$

Therefore $A^{-1}$ is going to be the matrix which rotates by either of those conditions above.


## - Properties of Inverse Matrices

$(B^{-1})^{-1} = B$

Suppose $A$ is an nxn matrix. Then $A^{-1}$ is the inverse of $A$ if it satisfies:

$AA^{-1} = A^{-1}A = I_{n}$

Note: The inverse of a matrix is unique

**Inverse of Products**

$(AB)^{-1} = B^{-1}A^{-1}$


## - The Transpose of a Matrix

The transpose of an mxn matrix $A$ is denoted $A^T$. $A^T$ is the nxm matrix where:

$$(A^T)_{ij} = A_{ij}$$

Simply swap rows and columns:

Example:

$$A = \begin{bmatrix} -1 & 5 \\\ 0 & 7 \end{bmatrix}$$

$$A^T = \begin{bmatrix} -1 & 0 \\\ 5 & 7 \end{bmatrix}$$

Note: 

$(A^T)^T = A$

$(A^{-1})^T = (A^T)^{-1}$

$(A + B)^T = A^T + B^T$

$r(A^T) = (rA^T)$

$(AB)^T = B^TA^T$
