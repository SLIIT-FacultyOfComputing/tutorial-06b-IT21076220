class Student {
  private:
  int studentID;
  char name[20];// private section
  
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  public:
  void assignDetails(int studentID , const char name[]);
  void display();
};
