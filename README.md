Sorting techniques -
</br> 
<h2>insertion sort-</h2>
</br>
in this the given array is dividet into to sub list one is soted array and another one is unsorted array unsorted array is noting but the given string and sorted array is intialy empty we select one variable from the 
unsorted array and place that array into sorted array at there upropriate place.

* why it called insertation sort?
  => because we are taking  variable from unsorted list and inserting it on sorted list because of this we calls it as insertaton sort
</br>  here we assuming that 5 is sorted because we are taking one variable from unforted list so abuvasly there is only one variable is soretde list so we can consider that value as a soted </br>
Ex-
  1 step = array = 5 4 10 6 2</br>
  
      here it is a unsorted array
     we pick one element from this array that is 5 which is alocated at index of 0
     and inserted into sorted array assuming that it is sorted element </br>
 2 step=  5 4 10 6 2 </br>
 
      so 5 is in sored array</br>
        and rest all in unsored array</br>
      now in take 4 which is index of 1 and put it into temp variable  temp=4  know </br>
             now we compare his element with sorted arrray that is 5</br>
     fisrt we check 5 is greter then temp  element </br>
     which is true (if it true then we shift that element to the right side and right side there is 4 so we can overright that value because we coped that value in temp  )
     </br>
     now the array look like this </br>
     
   3  step= 4 5 10  6 2
     </br> 
     now temp = 10
     </br>
     here sorted element that is 5 lrss then 10 so no shifting wil hepen 10 will remain that position only</br>
     
    4 step= 4 5 10 6 2
    </br> now the sorted elements is 4 5 10 and unsorted elements is 6 2
     </br>
     temp =6</br>
     10 is greter then 6 so the 10 is shifted to right side   (so 6 is overright by 10) 
     </br>
     but 5 in less then 6 so no shifting </br>
     
     5 step= 4 5 6 10 2
      </br>
      same rule for last step (for 2)
    </br>

    sorted array is = 2 4 5 6 10

  time complexit = o(n square) (worst case) but if the array is sorted form (i.e aasending order)then time compleit = o(n)(best case)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------

<h2>selection sort -</h2>
<br>
* the selection sort is same as insertion sort in the give array we make to sub list [sortedlist] [unsortedlist]
</br>
but the only difference is we asume that the sorted list is empty and know we  comapre 1st smallest elemnet in the unsorted array with the 1st [ i,e n[0]] element in the unsorted list  and swap that element</br>
EX - n = 4 8 1 10 7

</br>
         sorted  |  unsorted
         </br>
pass 1=        1 | 8 4 10 7 </br>      ->  here 1st elen 4 is swap in smallest elen that is 1 so now 1 in sorted list</br>

pass 2 =       1 4 | 8 10 7  </br>

pass 3  =      1 4 7 | 8 10  </br>

pass 4 =      1 4 7 8 | 10 <br>

note - here is 5 element and number of pass are 4 because we sorted 4 elemenr then abuvasly 5th element at it correct position only 
 time complexit in both case(worst/best is)  = o(n square)

<h1>Code</h1>
* while writing the code we consider 1st element is minimum element   - so here i=0   min = i
* and then we compare that element with all the elements    and here j =i+1
* if j value a[j] is less then i value a[i] then min value is a[j]

