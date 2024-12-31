#include "AppUI.h"
#pragma once //avoid header loop
#ifndef APPCONDITION_H //avoid header loop
#define APPCONDITION_H //avoid header loop

//=======================
char OptSel; //initialize Options Seleter
//=======================
std::string InsertStudentID; //Search some studentID
std::string InsertTeacherID; //Search some TeacherID
std::string InsertCourseID; //Search some Course Information
//=======================
std::string GetString;
//=======================
std::string GetStuInfo_Name;
std::string GetStuInfo_Sex;
std::string GetStuInfo_Birthday;
std::string GetStuInfo_Professor;
std::string GetStuInfo_Department;
//=======================
std::string GetTchInfo_Name;
std::string GetTchInfo_Sex;
std::string GetTchInfo_Department;
//=======================
std::string GetCrsInfo_Name;
std::string GetCrsInfo_Professor;
std::string GetCrsInfo_Content;
//=======================
std::string StuDir = "./student/";
std::string TchDir = "./teacher/";
std::string CrsDir = "./course/";
std::string Fname;
std::string FExtName = ".csv";
//=======================
std::vector <std::string> W_Crt_StudentInfo;
std::vector <std::string> W_Crt_TeacherInfo;
std::vector <std::string> W_Crt_CourseInfo;
//=======================

void GetStuInfoUI()
{
    std::cout << "======================================" << std::endl;
    std::cout << "              學生資訊" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "姓名: " << GetStuInfo_Name << std::endl;
    std::cout << "性別: " << GetStuInfo_Sex << std::endl;
    std::cout << "生日: " << GetStuInfo_Birthday << std::endl;
    std::cout << "教授: " << GetStuInfo_Professor << std::endl;
    std::cout << "系別: " << GetStuInfo_Department << std::endl;
    std::cout << "======================================" << std::endl;
}

void GetTchInfoUI()
{
    std::cout << "======================================" << std::endl;
    std::cout << "              教師資訊" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "姓名: " << GetTchInfo_Name << std::endl;
    std::cout << "性別: " << GetTchInfo_Sex << std::endl;
    std::cout << "授課系別: " << GetTchInfo_Department << std::endl;
    std::cout << "======================================" << std::endl;
}


void GetCrsInfoUI()
{
    std::cout << "======================================" << std::endl;
    std::cout << "              課程資訊" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "課程名稱: " << GetCrsInfo_Name << std::endl;
    std::cout << "授課教師: " << GetCrsInfo_Professor << std::endl;
    std::cout << "授課內容: " << GetCrsInfo_Content << std::endl;
    std::cout << "======================================" << std::endl;
}

void SrcStuSelOpt() //MainPageOptSel()
{
    SrcStuSelUI(); //Search Student ID
    std::cin >> InsertStudentID;
    Fname = StuDir + InsertStudentID + FExtName; //File name = Directory + Filename + Extension FileName
    std::ifstream in(Fname, std::ios::in); //Read file mode
    if(!in.is_open())
    {
        std::cerr << "無法讀取檔案！請確定有建立檔案或者權限讀取!" << std::endl;        
    }
    //===================================================================
        //std::string line;
        std::vector<std::string> result; // save split string
        while (std::getline(in, GetString)) { //save the string tempturely
            
            std::stringstream ss(GetString); //control data string IO
            std::string token;

            // spilt from comma
            if (std::getline(ss, token, ',')) GetStuInfo_Name = token;
            if (std::getline(ss, token, ',')) GetStuInfo_Sex = token;
            if (std::getline(ss, token, ',')) GetStuInfo_Birthday = token;
            if (std::getline(ss, token, ',')) GetStuInfo_Professor = token;
            if (std::getline(ss, token, ',')) GetStuInfo_Department = token;
            GetStuInfoUI();
        
        }
    in.close();
    //===================================================================
    std::cout << std::endl;
    system("pause");
    system("cls");
}

void SrcThcSelOpt()
{
    SrcTchSelUI(); //Search Student ID
    std::cin >> InsertTeacherID;
    Fname = TchDir + InsertTeacherID + FExtName; //File name = Directory + Filename + Extension FileName
    std::ifstream in(Fname, std::ios::in); //Read file mode
    if(!in.is_open())
    {
        std::cerr << "無法讀取檔案！請確定有建立檔案或者權限讀取!" << std::endl;        
    }
    //===================================================================
        //std::string line;
        std::vector<std::string> result; // save split string
        while (std::getline(in, GetString)) { //save the string tempturely
            
            std::stringstream ss(GetString); //control data string IO
            std::string token;

            // spilt from comma
            if (std::getline(ss, token, ',')) GetTchInfo_Name = token;
            if (std::getline(ss, token, ',')) GetTchInfo_Sex = token;
            if (std::getline(ss, token, ',')) GetTchInfo_Department = token;
            GetTchInfoUI();
        
        }
    in.close();
    //===================================================================
    std::cout << std::endl;
    system("pause");
    system("cls");
}

void SrcCrsSelOpt()
{
    SrcCrsSelUI(); //Search Student ID
    std::cin >> InsertCourseID;
    Fname = CrsDir + InsertCourseID + FExtName; //File name = Directory + Filename + Extension FileName
    std::ifstream in(Fname, std::ios::in); //Read file mode
    if(!in.is_open())
    {
        std::cerr << "無法讀取檔案！請確定有建立檔案或者權限讀取!" << std::endl;        
    }
    //===================================================================
        //std::string line;
        std::vector<std::string> result; // save split string
        while (std::getline(in, GetString)) { //save the string tempturely
            
            std::stringstream ss(GetString); //control data string IO
            std::string token;

            // spilt from comma
            if (std::getline(ss, token, ',')) GetCrsInfo_Name = token;
            if (std::getline(ss, token, ',')) GetCrsInfo_Professor = token;
            if (std::getline(ss, token, ',')) GetCrsInfo_Content = token;
            GetCrsInfoUI();
            
        }
    in.close();
    //===================================================================
    std::cout << std::endl;
    system("pause");
    system("cls");
}
//=======================================================================

void W_Student_Info()
{   
    //=============================
    W_Crt_StudentInfo.resize(5); //define contant size
    //=============================/
    std::cout << "學生姓名：";
    std::cin >> W_Crt_StudentInfo[0];
    system("cls");
    std::cout << "學生性別：";
    std::cin >> W_Crt_StudentInfo[1];
    system("cls");
    std::cout << "學生生日：";
    std::cin >> W_Crt_StudentInfo[2];
    system("cls");
    std::cout << "學生教師：";
    std::cin >> W_Crt_StudentInfo[3];
    system("cls");
    std::cout << "學生科系：";
    std::cin >> W_Crt_StudentInfo[4];
    system("cls");
}

//========================================================================

void CrtStuSelOpt()
{
    if(!std::filesystem::exists(StuDir))
    {   
        //std::filesystem::create_directories(Log_Directory);  // create the directory
        if(std::filesystem::create_directories(StuDir))
        {
            //std::cout  << "Created!";
        }
        else
        {
            std::cerr << "FILE WAS FAILD TO CREAT, PLEASE TYR AGAING !\n";
            return;   
        }
    }
    CrtStuSelUI();

    std::cin >> InsertStudentID; //Write StudentID
    system("cls");
    Fname = StuDir + InsertStudentID + FExtName; //File name = Directory + Filename + Extension FileName
    
    std::ofstream out(Fname, std::ios::out | std::ios::binary);
    if (!out)
    {
        std::cerr << "Failed to create file: " << Fname << '\n';
        return;
    }
    out << "\xEF\xBB\xBF"; //BOM

    W_Student_Info();
    
    for(const auto& str : W_Crt_StudentInfo)
    {   
        out << str << ",";
    }
    
    out.close();
    
    std::cout << "現在 " << InsertStudentID + FExtName << " 已建立！" << std::endl;
    system("pause");
    system("cls");
}

void W_Teacher_Info()
{
        //=============================
    W_Crt_TeacherInfo.resize(5); //define contant size
    //=============================/
    std::cout << "教師姓名：";
    std::cin >> W_Crt_TeacherInfo[0];
    system("cls");
    std::cout << "教師性別：";
    std::cin >> W_Crt_TeacherInfo[1];
    system("cls");
    std::cout << "教授授課系別：";
    std::cin >> W_Crt_TeacherInfo[2];
    system("cls");
}

//========================================================================

void CrtTchSelOpt()
{
    if(!std::filesystem::exists(TchDir))
    {   
        //std::filesystem::create_directories(Log_Directory);  // create the directory
        if(std::filesystem::create_directories(TchDir))
        {
            //std::cout  << "Created!";
        }
        else
        {
            std::cerr << "FILE WAS FAILD TO CREAT, PLEASE TYR AGAING !\n";
            //return 1;   
        }
    }
    CrtTchSelUI();

    std::cin >> InsertTeacherID; //Write StudentID
    system("cls");
    Fname = TchDir + InsertTeacherID + FExtName; //File name = Directory + Filename + Extension FileName
    
    std::ofstream out(Fname, std::ios::out | std::ios::binary);
    if (!out)
    {
        std::cerr << "Failed to create file: " << Fname << '\n';
        return;
    }
    out << "\xEF\xBB\xBF"; //BOM

    W_Teacher_Info();
    
    for(const auto& str : W_Crt_TeacherInfo)
    {   
        out << str << ",";
    }
    
    out.close();
    
    std::cout << "現在 " << InsertTeacherID + FExtName << " 已建立！" << std::endl;
    system("pause");
    system("cls");
}
//=============================================
void W_Course_Info()
{
    //=============================
    W_Crt_CourseInfo.resize(5); //define contant size
    //=============================/
    std::cout << "課程名稱：";
    std::cin >> W_Crt_CourseInfo[0];
    system("cls");
    std::cout << "授課教師：";
    std::cin >> W_Crt_CourseInfo[1];
    system("cls");
    std::cout << "授課內容：";
    std::cin >> W_Crt_CourseInfo[2];
    system("cls");
}
//=============================================
void CrtCrsSelOpt()
{
        if(!std::filesystem::exists(CrsDir))
    {   
        //std::filesystem::create_directories(Log_Directory);  // create the directory
        if(std::filesystem::create_directories(CrsDir))
        {
            //std::cout  << "Created!";
        }
        else
        {
            std::cerr << "FILE WAS FAILD TO CREAT, PLEASE TYR AGAING !\n";
            //return 1;   
        }
    }
    CrtCrsSelUI();

    std::cin >> InsertCourseID; //Write StudentID
    system("cls");
    Fname = CrsDir + InsertCourseID + FExtName; //File name = Directory + Filename + Extension FileName
    
    std::ofstream out(Fname, std::ios::out | std::ios::binary);
    if (!out)
    {
        std::cerr << "Failed to create file: " << Fname << '\n';
        return;
    }
    out << "\xEF\xBB\xBF"; //BOM

    W_Course_Info();
    
    for(const auto& str : W_Crt_CourseInfo)
    {   
        out << str << ",";
    }
    
    out.close();
    
    std::cout << "現在 " << InsertCourseID + FExtName << " 已建立！" << std::endl;
    system("pause");
    system("cls");
}
//=================================

void DelStuSelOpt()
{
    WantDel_stuUI();
    std::cin >> InsertStudentID;
    system("cls");
    Fname = StuDir + InsertStudentID + FExtName; //File name = Directory + Filename + Extension FileName
    try {
        if (std::filesystem::remove(Fname)) {
            std::cout << "該學生資訊已刪除！\n";
        } else {
            std::cout << "未找到此學生資訊！\n";
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    system("pause");
    system("cls");
}
//=================================

void DelThcSelOpt()
{
    WantDel_tchUI();
    std::cin >> InsertTeacherID;
    system("cls");
    Fname = TchDir + InsertTeacherID + FExtName; //File name = Directory + Filename + Extension FileName
    try {
        if (std::filesystem::remove(Fname)) {
            std::cout << "該教師資訊已刪除！\n";
        } else {
            std::cout << "未找到此教師資訊！\n";
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    system("pause");
    system("cls"); 
}
//========================================

void DelCrsSelOpt()
{
    WantDel_crsUI();
    std::cin >> InsertCourseID;
    system("cls");
    Fname = CrsDir + InsertCourseID + FExtName; //File name = Directory + Filename + Extension FileName
    try {
        if (std::filesystem::remove(Fname)) {
            std::cout << "該課程資訊已刪除！\n";
        } else {
            std::cout << "未找到此課程資訊！\n";
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    system("pause");
    system("cls");
}

//========================================
void MainPageOptSel()
{   
    //====================================
    switch(OptSel)
    {   
        case '1': 
            SrcSelUI(); //Search
            std::cin >> OptSel;
            system("cls");
            //============================
            if(OptSel == '1')
            {
                SrcStuSelOpt();
            }
            else if(OptSel == '2')
            {
                SrcThcSelOpt();
            }
            else if(OptSel == '3')
            {
                SrcCrsSelOpt();
            }
            else if(OptSel == '4')
            {
                //Exit
            }
            //============================
            break;
        case '2':
            CrtSelUI(); //Create(Add)
            std::cin >> OptSel;
            system("cls");
            //============================
            if(OptSel == '1')
            {
                CrtStuSelOpt();
            }
            else if(OptSel == '2')
            {
                CrtTchSelOpt();
            }
            else if(OptSel == '3')
            {
                CrtCrsSelOpt();
            }
            else if(OptSel == '4')
            {
                //Exit
            }
            //============================
            break;
        case '3':
            DelSelUI(); //delete
            std::cin >> OptSel;
            system("cls");
            //============================
            if(OptSel == '1')
            {
                DelStuSelOpt();
            }
            else if(OptSel == '2')
            {
                DelThcSelOpt();
            }
            else if(OptSel == '3')
            {
                DelCrsSelOpt();
            }
            else if(OptSel == '4')
            {
                //Exit
            }
            //============================
            system("cls");
            break;
        case '4':
            exit(0);    //Exit 
        default:
            std::cout << "無效的輸入！\n";
            system("pause");
    }
}

#endif // after #ifndef APPCONDITION_H
