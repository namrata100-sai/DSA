Sorting techniques -
</br>
insertion sort-
</br>
in this the given array is dividet into to sub list one is soted array and another one is unsorted array unsorted array is noting but the given string and sorted array is intialy empty we select one variable from the 
unsorted array and place that array into sorted array at there upropriate place.

* why it called insertation sort?
  => because we are taking  variable from unsorted list and inserting it on sorted list because of this we calls it as insertaton sort
</br>
Ex-
  1. array = 5 4 10 6 2</br>
      here it is a unsorted array
     we pick one element from this array that is 5 which is alocated at index of 0
     and inserted into sorted array assuming that it is sorted element
 2.  5 4 10 6 2
      so 5 is in sored array</br>
        and rest all in unsored array</br>
      now in take 4 which is index of 1 and put it into temp variable  temp=4  know </br>
             now we compare his element with sorted arrray that is 5</br>
     fisrt we check 5 is greter then temp  element </br>
     which is true (if it true then we shift that element to the right side if not then we keep the element there only)
     </br>
     now the array look like this </br>
   3   4 5 10  6 2
     </br> 
     now temp = 10
     </br>
     here sorted element that is 5 lrss then 10 so no shifting wil hepen</br>
    4. 4 5 10 6 2  </br> now the sorted elements is 4 5 10 and unsorted elements is 6 2
     </br>
     temp =6</br>
     10 is greter then 6 so the 10 is shifted to right side
     </br>
     but 5 in less then 6 so no shifting </br>
     5. 4 5 6 10 2
      </br>
      same rule for last step (for 2)
    </br>

    sorted array is = 2 4 5 6 10


