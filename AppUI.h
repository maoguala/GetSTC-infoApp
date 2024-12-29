#include <iostream>
#include <windows.h>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <vector>
#pragma once
#ifndef APPUI_H
#define APPUI_H
//Variable for UI


void SrcStuSelUI() //Search Student ID
{
    std::cout << "=============" << std::endl;
    std::cout << "[請輸入學生學號]" << std::endl;
    std::cout << "=============" << std::endl;
}

void SrcTchSelUI() //Search Student ID
{
    std::cout << "=============" << std::endl;
    std::cout << "[請輸入教職編號]" << std::endl;
    std::cout << "=============" << std::endl;
}

void SrcCrsSelUI()
{
    std::cout << "=============" << std::endl;
    std::cout << "[請輸入課程編號]" << std::endl;
    std::cout << "=============" << std::endl;
}

void CrtStuSelUI()
{
    std::cout << "========================" << std::endl;
    std::cout << "請輸入學生學號(以建立檔案)" << std::endl;
    std::cout << "========================" << std::endl;
}

void CrtTchSelUI()
{
    std::cout << "========================" << std::endl;
    std::cout << "請輸入教師編號(以建立檔案)" << std::endl;
    std::cout << "========================" << std::endl;
}

void CrtCrsSelUI()
{
    std::cout << "========================" << std::endl;
    std::cout << "請輸入課程編號(以建立檔案)" << std::endl;
    std::cout << "========================" << std::endl;
}

void WantDel_stuUI()
{
    std::cout << "===============================" << std::endl;
    std::cout << "請輸入你想刪除的學生資訊(輸入學號)" << std::endl;
    std::cout << "===============================" << std::endl;
}

void WantDel_tchUI()
{
    std::cout << "===================================" << std::endl;
    std::cout << "請輸入你想刪除的教師資訊(輸入教職編號)" << std::endl;
    std::cout << "===================================" << std::endl;
}

void WantDel_crsUI()
{
    std::cout << "===================================" << std::endl;
    std::cout << "請輸入你想刪除的課程資訊(輸入課程編號)" << std::endl;
    std::cout << "===================================" << std::endl;
}

void SrcSelUI() //Search Selection UI
{
    std::cout << "查詢" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "[選取目標]" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "(1).學生" << std::endl;
    std::cout << "(2).教師" << std::endl;
    std::cout << "(3).課程" << std::endl;
    std::cout << "(4).回到上一頁" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "請輸入選項：";

}

void CrtSelUI()
{
    std::cout << "新增" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "[選取目標]" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "(1).學生" << std::endl;
    std::cout << "(2).教師" << std::endl;
    std::cout << "(3).課程" << std::endl;
    std::cout << "(4).回到上一頁" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "請輸入選項：";
}

void DelSelUI()
{
    std::cout << "刪除" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "[選取目標]" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "(1).學生" << std::endl;
    std::cout << "(2).教師" << std::endl;
    std::cout << "(3).課程" << std::endl;
    std::cout << "(4).回到上一頁" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "請輸入選項：";
}


void MainPage()
{
    std::cout << " 師生與課程資訊系統" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "[選取動作]" <<std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "(1)查詢" << std::endl;
    std::cout << "(2)新增" << std::endl;
    std::cout << "(3)刪除" << std::endl;
    std::cout << "(4).離開系統" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "輸入選項：";
}

#endif