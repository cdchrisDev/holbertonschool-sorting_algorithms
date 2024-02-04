# C - Sorting algorithms & Big O
### Resources
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)
## Learning Objectives
* At least four different sorting algorithms
	* **Selection Sort**: <br /> **First pass**: <br /> * For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. The first position where 64 is stored presently, after traversing whole array it is clear that 11 is the lowest value.<br /> * Thus, replace 64 with 11. After one iteration 11, which happens to be the least value in the array, tends to appear in the first position of the sorted list. [Example](https://media.geeksforgeeks.org/wp-content/uploads/20230524115038/1.webp) <br /> **Second Pass**: <br /> * For the second position, where 25 is present, again traverse the rest of the array in a sequential manner. <br /> * After traversing, we found that 12 is the second lowest value in the array and it should appear at the second place in the array, thus swap these values. <br /> [Example](https://media.geeksforgeeks.org/wp-content/uploads/20230526165135/2.webp) <br /> **Third Pass**: <br /> * Now, for third place, where 25 is present again traverse the rest of the array and find the third least value present in the array. <br /> * While traversing, 22 came out to be the third least value and it should appear at the third place in the array, thus swap 22 with element present at third position. <br /> [Example](https://media.geeksforgeeks.org/wp-content/uploads/20230526165200/3.webp) <br /> **Fourth Pass**: <br /> * Similarly, fourth position traverse the rest of the array and find the fourth least element in the array. <br /> * As 25 is the 4th lowest value hence, it will place at the fourth position.
* How to select the best sorting algorithm for a given input
What is a stable sorting algorithm
