Binary search is done by splitting the ascending ordered array and then comparing the search element with the mid value
and if the seach value is greater than the mid value the lower boundary becomes the mid+1 value and if lesser the upper
boundary becomes the mid-1 value and this goes on till all the mid values are compared to the search element 

Line 4-10 : I've used a class called Binary in which the variables and member functions are declared . The array A stores
            the values and the Upper Boundary , Lower Boundary and the mid value of the range between the Upper Boundary 
            and Lower Boundary is given by UB , LB and mid respectively .  I've taken three functions , one for inputting the 
            values , one for performing the Binary Search and the other to Display the position of the search element in the 
            Array .
            
Line 12-21: In the member function INP of the class Binary , the user enters the values of the array size and the array  and
            the search element . 


Line 30 : >  while(LB<=UB)
            This condition is used as the array is continuously split into two equal halves with the mid value being compared
            to the search element , in due course the length of the boundary slowly becomes 0 (ie UB-LB=0) so we say this
            condition so that the element at this position can still be compared to the search element . We say it's LB<=UB
            as if LB > UB , then UB-LB becomes negative which is impossible so as UB-Lb can be 0 and positive , we say 
            LB<=UB .
            
            

            
