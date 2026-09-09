 #include <stdio.h>
 #include <cs50.h>

 int main(void)
 {
	 int n = get_int("How many numbers? ");
	 int numbers[n];

	 for (int i = 0; i < n; i++)
	 {
		 numbers[i] = get_int("Enter number: ");
	 }

	 int target = get_int("Search for: ");
	 int found_index = -1;

	 for (int i = 0; i < n; i++)
	 {
		 if (numbers[i] == target)
		 {
			 found_index = i;
			 break;
		 }
	 }

	 if (found_index == -1)
	 {
		 printf("not found\n");
	 }
	 else
	 {
		 printf("Found at index %i\n", found_index);
	 }
 }
