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
--------------------------------------------------------------------------------------------------------------------------------------------------------------------</br>
<h1>quick sort</h1></br>
=> here quick sort is work on divide and conquer methed
</br>
means array is divided in to to sub arrays and that  we called  partition (imp this nothink but backboen og quick sort)  
</br>
in the given element we consider one element is pivot element (pivot can any element )
</br>
how partition happens
</br>
all the less element would be take to the left side of pivot element 
</br>
and all the greter element is shifted to the right side of pivot element (like this partition we be happen in quick sort)
</br>   if is there element is equal to the pivot element that can be go either way (that side or this side)
</br>
ex =>  partition1  ||  pivot || partition2
          <            pivot       >
          </br>
          now look we transfer less element to left and greter  element to right but there is not in sorted order
          </br>
          so we have to do agian partition in both the side partition 1 and paryition 2 to get a sorted list ( so thats why we called it as backbone of qs because there is lots of partitions )
          </br>
ex =>   <h1>array = 7 4 8 10 5 2 4 7 </h1> 
          </br>   here les take 7 as a pivot  so pivot =7  now we have to take to variable start and stop start is at the bigging of the array means array[o]   and end is at the last of an array means                array[7] </br>
  set = 1  </br>
         like this   
          start                       end 
            7    4   8   10  5  2  4  7    </br>  ==> now we chick her is start < = pivot if yes then increament will happen   || is end > piot if yes then decreament happen  </br>
                       start                  end
            7    4     8    10   5   2    4   7    => when the condition is false we swap start value and end value </br>
                           swap start and end value
            7     4    7    10   5   2    4    8     </br>
                            start         end         </br>
            7     4    7     10   5  2    4    8      </br> 
                              swap                    </br>
            7      4     7    4   5   2    10  8       </br>
                                      end  start
            7     4     7     4    5   2    10   8   </br>
                   when the start crosess the end   now is swap end value with pivot value  </br>
            2     4     7    4     5   7     10  8   
            <br>
            <h1> imp - now here check we  place all the less element left of the pivot variable and all greter element right to the pivot variable</h1>
            </br>
  set =2      now we got </br>
              partition 1    ||    pivot  ||    partition 2  </br>  
              2  4    7  4  5        7           10    8     =>  now we have to do same think in partition1 nad partition 2  untill we not get sorted list </br>
             
