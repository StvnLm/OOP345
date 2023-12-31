// main.cpp
#include "../header/patient.h" // Include the header file
#include "../header/appointment.h" 
#include "../header/inpatient.h"
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main() {
    Patient patientSteve("Steven", 12, 'M', "Cold");
    Patient patientBob("Bob", 31, 'M', "Strep throat");
    Patient patientJoanna("Joanna", 75, 'F', "Coronavirus");

	vector<Patient_services> chrisInpatientTreatments;
    Patient_services allergyTreatment;
    allergyTreatment.service_name = "Antihistamines";
    allergyTreatment.dose_schedule = "Twice a day";
    allergyTreatment.start_date = "2023-02-01";
    allergyTreatment.end_date = "2023-02-05";
    chrisInpatientTreatments.push_back(allergyTreatment);
    Patient_services pinkEyeTreatment;
    pinkEyeTreatment.service_name = "Moxeza";
    pinkEyeTreatment.dose_schedule = "Once a day";
    pinkEyeTreatment.start_date = "2023-02-01";
    pinkEyeTreatment.end_date = "2023-02-05";
    chrisInpatientTreatments.push_back(pinkEyeTreatment);

    Inpatient inpatientChris("Chris", 24, 'M', "Seasonal allergies", 13, chrisInpatientTreatments);
   
    Appointment myAppointments;

    Doctor doctorJohn("John Washington", "Doctor");
    Nurse nurseJessica("Jessica Corn", "Nurse");
    MedicalStaff resMike("Mike Pence", "Residen tDoctor");

    myAppointments.addAppointment(12, 12, 2023, 1, 30, patientSteve, doctorJohn);
    myAppointments.addAppointment(1, 9, 2022, 2, 45, patientBob, doctorJohn);
    myAppointments.addAppointment(1, 9, 2022, 3, 45, patientSteve, nurseJessica);
    myAppointments.addAppointment(22, 8, 2019, 14, 15, patientJoanna, resMike);
    myAppointments.addAppointment(11, 4, 2015, 16, 55, inpatientChris, nurseJessica);
    myAppointments.printAppointments();
    return 0;
}
