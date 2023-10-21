class praktis
{
    
        public static void main(String[] args) {
          //float nomor = 23.33f;
          //long nomor2 = 293847832618L;
          //double nomor3 = 2939884.000293884d;
         // boolean boole1 = true;
          char myVar1 = 65, myVar2 = 66, myVar3 = 'a';
          String kata1 = "Hallo World";
          System.out.println(myVar1);
          System.out.println(myVar2);
          System.out.println(myVar3);
          System.out.println(kata1 + ", here i am");

          int myInt = 9;
          double myDouble = myInt;
          System.out.println(myDouble); //widening byte > short > char > int > long > float > double

          int myInt2 = 2000000000;
          byte myShort = (byte) myInt2;
           System.out.println(myShort); //narrowing double > float > long > int > char > short > byte

           //logical operator
           int a = 6;
           int b = 8;
           System.out.println(a < b && a > 4);

           //string
           String myString1 = "HALLO WORLD"; //must be String
           System.out.println(myString1.length());
           String myString2 = "Hallo Java, ";
           System.out.println(myString2.concat(myString1));
           System.out.println(myString2.toLowerCase());
           System.out.println(myString2.indexOf("a"));
           
           //Math
           System.out.println(Math.min(2, 100));
           System.out.println(Math.max(2, 100));
           System.out.println(Math.abs(-900)); // turning a negative number to a positive number
           System.out.println(Math.random()); 
           int myInt3 = (int) (Math.random() * 101); // turning a float number into decimal number. because randoms are searching in floating way like(0.442384)
           System.out.println(myInt3); 
           float myFloat1 = (float) (Math.random() * 101); //stay in floating way
           System.out.println(myFloat1); 

//IF ELSE
        int value = 63;
    if (value >= 90 && value <= 100) { //value > 70 Anda Lulus
      System.out.println("Anda Lulus dan Nilai Anda Sempurna");
    } else if (value >= 70) {
      System.out.println("Anda Lulus");
    }  else {
      System.out.println("Anda Tidak Lulus");
    }

//SWITCH CASE
     int day = 6;
    switch (day) {
      case  6:
        System.out.println("Today is Saturday");
        break;
      case 7:
        System.out.println("Today is Sunday");
        break;
      default:
        System.out.println("Looking forward to the Weekend");
    }   

    //WHILE
    int myWhile = 1;
    while (myWhile < 8) {
    
    System.out.print("Java -");
    System.out.println(myWhile);
    myWhile++;
        }
    //DO WHILE
    int myDo = 20;
    do {
        System.out.print("DO per -");
         System.out.println(myDo);
         myDo = myDo -3;
    } while (myDo >= 0);

    //FOR LOOPING
    for (int myFor = 1; myFor <= 10; myFor++) {
        System.out.print("FOR ke -");
        System.out.println(myFor);
    }
    //NESTED FOR LOOPING
    for (int myFor2 = 5; myFor2 >= 1; myFor2--) {
    for (int space = 1; space <= 5 - myFor2; space++) { //Print keseluruhan pada baris ini
        System.out.print(" ");
    }
    for (int myFor3 = myFor2; myFor3 >= 1; myFor3--) {
        System.out.print("* ");
    }
    System.out.println();
}


System.out.println("------------------"); 
    //
    for (int myFor4 = 1; myFor4 <= 5; myFor4++) {
    for (int space2 = 1; space2 <= 5 - myFor4; space2++) { //Print keseluruhan pada baris ini
        System.out.print(" ");
    }
    for (int myFor5 = 1; myFor5 <= myFor4; myFor5++) {
        System.out.print("* ");
    }
    System.out.println();
  }
  System.out.println("------------------");     
  for (int tingkat = 1; tingkat <= 5; tingkat++) {
    for (int dlmTingkat = 1; dlmTingkat <= tingkat; dlmTingkat++) {
      System.out.print("* ");
      
    }
    System.out.println();
}
//
 System.out.println("------------------");   
for (int tingkat2 = 1; tingkat2 <= 5; tingkat2++) {
    for (int dlmTingkat2 = 5; dlmTingkat2 >= tingkat2; dlmTingkat2--) {
      System.out.print("* ");
      
    }
    System.out.println();
}
//
//ARRAY DIMENSI 1
String[] myLoopArray = {"Cool", "amazing", "Apetizing", "Informative", "Collaborative"};
for (int s = 0; s < myLoopArray.length; s++) {
    System.out.print(myLoopArray[s]);
    System.out.print("+");
}
//
System.out.println();
String[] myLoopArray2 = {"Cool", "amazing", "Apetizing", "Informative", "Collaborative"};
for (String s2 : myLoopArray2) {
    System.out.print(s2);
    System.out.println("+");
}
//
//ARRAY MULTIDIMENSI
String[][] myDimenArray = {{"Laptop", "Handphone", "Tablet"}, {"Car", "Bike", "Train"}, {"Jakarta", "Bandung", "Surabaya"}};
for (int y = 0; y < myDimenArray.length; y++) {
    System.out.print("Golongan ke - ");
    System.out.println(y);
  for (int z = 0; z < myDimenArray[y].length; z++) {
    System.out.println(myDimenArray[y][z]);
  }
}

}  
}
