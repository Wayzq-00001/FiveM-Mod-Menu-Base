#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <direct.h>
#include <random>
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <d3d11.h>
#include "functional"
#include "filesystem"
#include <Wininet.h>
#include <io.h>
#include "font_awesome.cpp"
#include "kiero/kiero.h"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"

//functions

#include "functions/Aimbot/Aimbot.h"
#include "functions/ESP/ESP.h"


//Credits
//d0p3t | d0p3t#0720, github.com/german-admiral-man
//Wayzq | Wayzq#1339, github.com/Wayzq-00001
//Juan | Juan.#8888, github.com/Juan0187

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;
