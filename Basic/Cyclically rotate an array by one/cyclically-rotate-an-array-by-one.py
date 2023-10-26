#User function Template for python3

def rotate(arr, n):
    a = arr[-1]
    for i in reversed(range(len(arr)-1)):
        arr[i+1] = arr[i]
    arr[0] = a
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(a, n)
        print(*a)

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends