def acc_array(A):
	n = int (input("Enter the number of students : "))
	for i in range(n):
		x = float(input("Enter the percentage of student %d : "%(i+1)))
		A.append(x)
	print("Array accepted\n")

def disp_array(A):
	n = len(A)
	if ( n == 0 ) :
		print("\nNo recoreds in the database")
	else :
		print("\nArray of marks : ",end = ' ')
		for i in range(n) :
			print("%.2f "%A[i],end = ' ')
		print("\n")

def select_sort(A) :
	n = len(A)
	for p in range(n-1):
		min_index = p 
		for i in range(p+1,n):
			if (A[i] < A[min_index]) :
				min_index=1
		temp = A[p]
		A[p] = A[min_index]
		A[min_index] = temp

def bubble_sort(A) :
	n = len(A)
	for Pass in range(1,n) :
		for i in range(n - Pass) :
			if(A[i] < A[i+1]) :
				temp = A[i]
				A[i] = A[i+1]
				A[i+1] = temp


def main():
	A = []
	while True :
		print("\t1 : Acccept and display the marks")
		print("\t2 : Selection sort")
		print("\t3 : Bubble sort and display top 5 scores")
		print("\t4 : Exit")
		c = int(input("Enter the option : "))
		if (c == 4):
			print("End of Program")
			quit()
		elif (c == 1):
			acc_array(A)
			disp_array(A)
		elif (c == 2) :
			print("Marks before sorting")
			disp_array(A)
			select_sort(A)
			print("Marks after sorting")
			disp_array(A)
		elif (c == 3) :
			print("Marks before sorting")
			disp_array(A)
			bubble_sort(A)
			print("Marks after sorting")
			disp_array(A)
			if(len(A) >= 5) :
				print("Top 5 scores : ")
				for i in range(5) :
					print("\t%.2f"%A[i])
			else:
				print("\nTop scorers : ")
				for i in range(len(A)) :
					print("\t%.2f"%A[i])

		else :
			print ("Wrong option entered")

main()