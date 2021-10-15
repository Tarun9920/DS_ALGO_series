def linear_search(A,item):
  for i in A:
    if i == item:
      print("Item Found !!")
      return
  print("Item Not Present!!")
  
a=[5,2,6,2445,5723,356,2,-2]

linear_search(a,-5)
