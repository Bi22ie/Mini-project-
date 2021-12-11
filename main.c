#include <stdio.h>
#include <string.h>

int char_counter(char search_char, char input_sentence[]); 

int main(void) {

char sentence1[100]; 
//100 is the max number of letters that can be stored within this integer, I choose 100 as I thought that most sentences wouldn't go over this amount
char sentence2[100];
  printf("Input sentence 1: ");
  scanf("%[^\n]%*c",sentence1);
  printf("Input sentence 2: ");
  scanf("%[^\n]%*c",sentence2);
  //%*c mean read but don't scan otherwise it ends up executing too early  and the next line of code cant run 
  printf("\n%s %s\n",sentence1, sentence2);


 // First statistic output counting how many characters are in each sentence

//strlen calculates the length of a given string
//creating an integer which will store the length of sentence 1 as A
  int A= strlen(sentence1);
//creating an integer which will store the length of sentence 2 as B  
  int B= strlen(sentence2);
//then prints out the number associated with each sentence
  printf("The number of characters including spaces in sentence 1 is %d\n\n", A);
  printf("The number of characters including spaces in sentence 2 is %d\n\n", B);

// Second statistic output which sentence is longer

//creating an if statement so that a different line of code runs depending on the outcome of each line
  if (A>B)
//if A which has been assigned a number in line 21 is bigger than B which is assiged a number in line 23 then the sentence below is printed 
    printf("Sentence 1 is bigger than Sentence \n\n");
//If this is not meet then the code runs the next line which is exucuted if A=B
      else if (A==B)
      printf("The sentences are the same length\n\n");
//When these last two conditions are met then B must be longer than A so the next sentence is printed
        else
        printf("Sentence 2 is longer than Sentence 1\n\n");
        
// Thirs statistic output counting the number of words in a sentence
//create an int to store when there is a space. It starts at 1 as there won't be a space at the start of the sentence
  int spacecounter=1;
// when the for loop is meet the it moves on.
  for(int i=0; i<A; i++) {
//printf("\n %c",sentence1[i]); This line of code was just so I could see if it was working
    if (sentence1[i]== ' '){
// the ' ' tells the code that it is looking for the spaces
      spacecounter++;
  
    }
  }

//it then prints out the answers and then repeates for sentence 2
    printf("The number of words in the sentence 1 is %d\n\n",spacecounter);
  int spacecounter2 =1;

  for (int i=0; i<B; i++) {
// using the input of B this time instead of A
    if (sentence2[i]== ' '){
      spacecounter2++;
    }
  }
    printf("The number of words in sentence 2 is %d\n\n",spacecounter2);


// Forth Statistic Full stop counter 
int fullstopcounter=0;
//The full stop counter starts at 0 as there might not be any in the sentence
  for(int i=0; i<A; i++) {
    //printf("\n %c",sentence1[i]);
    if (sentence1[i]== '.'){
// the '.' tells the code to search for full stops
      fullstopcounter++;
    }
  }
  printf("The number of full stops in the sentence 1 is %d\n\n",fullstopcounter);
//the \n\n tells the code to start a new line twice so there is a space making the code easier. 
  
// reapeat for sentence 2 
int fullstopcounter2=0;
  for(int i=0; i<B; i++) {
    //printf("\n %c",sentence1[i]);
    if (sentence2[i]== '.'){
      fullstopcounter2++;
    }
  }
  printf("The number of full stops in the sentence 2 is %d\n\n",fullstopcounter2);



//Fith statistic vowel counter

//int acounter=0;
  //for(int i=0; i<A; i++) {
    //if (sentence1[i]== 'a'){
      //acounter++;
    //}
  //}
//int ecounter=0;
  //for(int i=0; i<A; i++) {
    //if (sentence1[i]== 'e'){
      //ecounter++;
    //}
  //}
//int icounter=0;
  //for(int i=0; i<A; i++) {
    //if (sentence1[i]== 'i'){
      //icounter++;
    //}
  //}

  //int ocounter=0;
  //for(int i=0; i<A; i++) {
    
    //if (sentence1[i]== 'o'){
      //ocounter++;
    //}
  //}
  //int ucounter=0;
//   for(int i=0; i<A; i++) {
//     if (sentence1[i]== 'u'){
//       ucounter++;
//     }
//   }
// //after using the for loop to get how many of each vowel is in sentence 1 
// //create an int which are assigned the sum of each vowels    
// int vowels = acounter + ecounter + icounter + ocounter + ucounter ;
//   printf("The number of vowels present in the sentence 1 is %d\n\n", vowels);
  
// //repeat the process for sentence 2
//   int acounter2=0;
//   for(int i=0; i<B; i++) {
//     if (sentence2[i]== 'a'){
//       acounter2++;
//     }
//   }

//     int ecounter2=0;
//   for(int i=0; i<B; i++) {
//     if (sentence2[i]== 'e'){
//       ecounter2++;
//     }
//   }

//   int icounter2=0;
//   for(int i=0; i<B; i++) {
//     if (sentence2[i]== 'i'){
//       icounter2++;
//     }
//   }

//     int ocounter2=0;
//   for(int i=0; i<B; i++) {
//     if (sentence2[i]== 'o'){
//       ocounter2++;
//     }
//   }

//     int ucounter2=0;
//   for(int i=0; i<B; i++) {
//     if (sentence2[i]== 'u'){
//       ucounter2++;
//     }
//   }
  
//   int vowels2= acounter2 + ecounter + icounter +ocounter + ucounter;
//   printf("The number of vowels present in the sentence 2 is %d\n\n",vowels2);


  char vowels_array[] = "aioeu";
  int vowel_length = strlen(vowels_array);

  int vowel_amount = 0; 
  printf("\ntest function");
  for (int i = 0; i < vowel_length; i++ ){
    printf("\n%c%d", vowels_array[i],char_counter
    (vowels_array[i], sentence1));
    vowel_amount += char_counter(vowels_array[i], sentence1);


  }
    printf("\nthere are %d many vowels", vowel_amount);

  return 0; 



}



int char_counter(char search_char, char input_sentence[]){
  int counter=0;
  for(int i=0; i<strlen(input_sentence); i++) {
    if (input_sentence[i]== search_char){
      counter++;
    }

  }
  return counter; 
}


