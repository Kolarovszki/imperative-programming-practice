# Mandatory tasks

1. Change the value of a variable through a pointer.

2. Create a function which swaps the values of two variables. Can you apply
   this function for swapping two array elements? How?

3. Change the value of a pointer throught a pointer to a pointer. After this
   also change the value of the variable pointed by this pointer.

4. Can you create a pointer which points to itself? What is its type? Why
   (not)? Compare the sizes of pointers to different types. What is the reason
of this result?

5. Create a function which gets an array as parameter and returns the sum of
   its elements. The array should be passed to the function with a pointer to
the first element and the size of the array. Redesign the function so it works
without using operator[], use pointer arithmetics instead. Can you compute the
array size without passing a second parameter to the function?

6. Redesign the previous function so a pointer to the first element and another
   pointer after the last element is passed as parameters. What happens if
we're overindexing by one or more?

7. Redesign the previous task so it computes the average of elements. How to
   use the two pointers for determining the number of elements?

8. What happens if a function returns a pointer that points to a local
   variable?

9. What happens if indirection is used for a null pointer?

10. What is the reason of using operator& in scanf() when reading an integer?

11. Create a function which determines which pointer points to the smaller
    index element of an array?

12. How does the implementation of strlen() and strcmp() look like? Create and
    test them!

# Optional tasks

1. Write a function that returns a pointer to the maximum element of an array
   that is a parameter. What are the advantages and disadvantages of doing this
compared to returning an index?

2. Can we apply the function written in the previous problem to half of an
   array? How?

3. Can we apply the function written in the previous problem to a single
   variable as if it were an array of elements?

4. A function can also return a value using a return value, or a pointer (eg
   scanf). When to use which one? What are the advantages / disadvantages of
the methods?

# Advanced tasks

1. Look at how to declare an array pointer. What does a function that returns
   an array pointer look like?

2. Find out how to declare a pointer to a function. What does a declaration of
   a returning function with a pointer to a function look like?

3. How does pointer arithmetic work in multidimensional arrays?

