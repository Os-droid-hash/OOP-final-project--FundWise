# 📘 FundWise – Scholarship Management System

---

## 🔷 Project Title

**FundWise: Scholarship Management System**

---

## 🔷 Project Description

FundWise is a console-based Scholarship Management System developed in C++ using Object-Oriented Programming concepts. The main idea behind this project is to simplify the process of managing scholarship applicants, evaluating their eligibility, and tracking the distribution of funds.

Instead of using a simple yes/no eligibility rule, the system uses a scoring approach based on CGPA and family income. This makes the selection process more flexible and realistic. The system also supports both Admin and Applicant roles, allowing controlled access and interaction.

Overall, the project combines real-world functionality with core programming concepts like file handling, dynamic memory, and modular design.

---

## 🔷 Group Members

| Name            | Student ID  |
| --------------- | ----------  |
| Osailah Atif    | 25K-0789    |
| Fatima Javed    | 25K-0594    |
| Maham Mustafa   | 25K-0764    |

---

## 🔷 Use Cases of the System

The following use cases describe how FundWise is actually used in practice. They reflect the main interactions between the admin and applicants, based directly on how the system has been implemented.



### **UC1: Admin Registers a New Applicant**

The process begins with the admin logging into the system using predefined credentials. To add a new applicant, the admin selects the relevant option and enters details such as ID, name, age, CGPA, family income, field of study, and login credentials.

Once the data is entered, the system validates the CGPA and immediately calculates an eligibility score using both academic performance and financial need. This score helps in later decision-making. The applicant is then stored in the system and written to the file for future use.



### **UC2: Admin Updates Applicant Information**

If there is any change in an applicant’s academic performance or financial situation, the admin can update their CGPA and income. After entering the applicant’s ID, the system locates the record and applies the changes.

What’s important here is that the eligibility score is recalculated automatically, so the system always reflects the most accurate and updated information without requiring manual adjustments.



### **UC3: Admin Deletes an Applicant Record**

In situations where an applicant is no longer relevant (for example, withdrawal or invalid data), the admin can delete their record by entering the ID.

If the applicant exists, the record is removed completely. If not, the system clearly indicates that the applicant was not found, avoiding confusion during operation.



### **UC4: Admin Searches and Filters Applicants**

Since the number of applicants can grow, the system includes filtering options to make searching easier. The admin can view applicants based on CGPA, income, status, or eligibility score.

This feature is especially useful when trying to shortlist candidates, as it allows quick access to the most suitable applicants without going through all records manually.



### **UC5: Admin Disburses Scholarship Funds**

After reviewing applicants, the admin can assign scholarship funds to selected candidates. This involves entering the applicant’s ID and the amount to be awarded.

Once this step is completed, the system updates the applicant’s status from *Pending* to *Approved*, reflecting that they have been selected for funding.



### **UC6: Applicant Accesses Dashboard and Tracks Installments**

Applicants can log into the system using the credentials created during registration. After logging in, they can view their profile, including CGPA, income, eligibility score, and current status.

They also have the option to record installment payments. Each payment updates their progress, and once all installments are completed, the system automatically changes their status to *Completed*. This allows both the admin and applicant to track the funding process clearly.



### **UC7: Data Persistence Across Sessions**

One important aspect of the system is that data is not lost when the program closes. All applicant records are stored in a file and reloaded when the system starts again.

This ensures continuity, so the admin does not need to reenter data every time the program runs.

---

## 🔷 Instructions to Compile the Project

### Using Dev C++:

1. Open Dev C++
2. Create a new **Console Application (C++)** project
3. Add all source files:

   * `main.cpp`
   * `System.cpp`
   * `Applicant.cpp`
   * `Admin.cpp`
   * `User.cpp`
4. Add the corresponding header files (`.h`):

  * `System.h`
  * `Applicant.h`
  * `Admin.h`
  * `User.h`
5. Click:

   ```
   Execute → Rebuild All
   ```

---

## 🔷 Instructions to Run the Project

1. After compiling, click:

   ```
   Execute → Compile & Run
   ```

   or press **F11**

2. The main menu will appear with options to login or exit

3. Choose login and continue as Admin or Applicant

---

## 🔷 Instructions to Use the System

### 🔹 Admin Side

* Login using admin credentials
* Access options to:

  * Add applicants
  * Update details
  * Delete records
  * Search/filter applicants
  * Disburse scholarships

This side is mainly responsible for managing the entire system.

---

### 🔹 Applicant Side

* Login using registered credentials
* View personal details
* Pay installments
* Track scholarship status

This side allows applicants to interact with their own data.

---

## 🔷 Assumptions

* Admin credentials are predefined in the system
* Each applicant has a unique ID
* Scholarship is distributed in a fixed number of installments
* Eligibility score depends on CGPA and income
* Data is stored in a text file (`applicants.txt`)

---

## 🔷 Limitations

* The system is console-based (no graphical interface)
* Admin login is hardcoded and not stored in a file
* Input validation is basic and may not handle all edge cases
* File handling uses a simple text format instead of a database
* The system is designed for single-user interaction

---

## 🔷 Technologies Used

* C++ Programming Language
* Object-Oriented Programming (OOP)
* File Handling (Text Files)
* Dev C++ IDE

---

## 🔷 Conclusion

This project demonstrates how Object-Oriented Programming concepts can be applied to build a practical system. FundWise not only manages applicant data efficiently but also introduces structured design and persistent storage.

While it is a console-based system, it can be extended further with a graphical interface or database integration in the future.

---
