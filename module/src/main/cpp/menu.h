//
// Created by lbert on 4/15/2023.
//

#ifndef ZYGISK_MENU_TEMPLATE_MENU_H
#define ZYGISK_MENU_TEMPLATE_MENU_H
#include "functions.h"

using namespace ImGui;

void DrawMenu()
{
    ImGui::SetNextWindowSizeConstraints(ImVec2(450.0f, 150.0f), ImVec2(FLT_MAX, FLT_MAX));
    Begin(OBFUSCATE("EYEFREE | TORAM ONLINE"));
    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_FittingPolicyResizeDown;
    if (BeginTabBar("Menu", tab_bar_flags)) {
        if (BeginTabItem(OBFUSCATE("Player Menu"))) {
            Checkbox(OBFUSCATE("God Mode"), &cGod);
            Checkbox(OBFUSCATE("Move"), &moved);
            if(CollapsingHeader(OBFUSCATE("Chapter 1")))  {
                if(Button(OBFUSCATE("First Time Visit1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 65.2056655883789f, 16.100000381469727f, 21.418893814086914f);
                }
                if(Button(OBFUSCATE("First Time Visit2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 111.80000305175781f, 12.0f, 130.89999389648438f);
                }
                if(Button(OBFUSCATE("Straye Brother And Sister1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 149.89999389648438f, 12.0f, 82.19999694824219f);
                }
                if(Button(OBFUSCATE("Straye Brother And Sister2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3300, 114.4000015258789f, 4.799999713897705f, 66.30000305175781f);
                }
                if(Button(OBFUSCATE("Straye Brother And Sister3"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3300, 91.35348510742188f, 4.099999904632568f, 129.58079528808594f);
                }
                if(Button(OBFUSCATE("Straye Brother And Sister4"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 128.60000610351562f, 12.0f, 126.5f);
                }
                if(Button(OBFUSCATE("Straye Brother And Sister5"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 149.89999389648438f, 12.0f, 82.19999694824219f);
                }
                if(Button(OBFUSCATE("A Golem On A Rampage"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3500, 107.84707641601562f, 2.3999998569488525f, 84.26851654052734f);
                }
                if(Button(OBFUSCATE("The Goddes Of Wisdom1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 149.89999389648438f, 12.0f, 82.19999694824219f);
                }
                if(Button(OBFUSCATE("The Goddes Of Wisdom2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 72.14494323730469f, 3.809999942779541f, 53.04341125488281f);
                }
                if(Button(OBFUSCATE("The Goddes Of Wisdom3"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3600, 59.35024642944336f, 11.098372459411621f, 79.15535736083984f);
                }
                if(Button(OBFUSCATE("The Goddes Of Wisdom4"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3600, 70.5f, 10.399999618530273f, 62.5f);
                }
                if(Button(OBFUSCATE("The Dragons Den1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3600, 183.6999969482422f, 12.375110626220703f, 44.70000076293945f);
                }
                if(Button(OBFUSCATE("The Dragons Den2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3700, 135.8000030517578f, 29.260433197021484f, 158.60000610351562f);
                }
                if(Button(OBFUSCATE("The Dragons Den3"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3800, 64.19999694824219f, 4.0f, 64.0f);
                }
                if(Button(OBFUSCATE("The Dragons Den4"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
                if(Button(OBFUSCATE("The Dragons Den5"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
                if(Button(OBFUSCATE("The Ruined Temple1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 23.475509643554688f, 13.908291816711426f, 19.786741256713867f);
                }
                if(Button(OBFUSCATE("The Ruined Temple2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4002, 63.84854507446289f, 14.768699645996094f, 61.71546936035156f);
                }
                if(Button(OBFUSCATE("The Ruined Temple3"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4002, 90.58512115478516f, 2.2794365882873535f, 24.658756256103516f);
                }
                if(Button(OBFUSCATE("The Ruined Temple4"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4100, 79.87840270996094f, 14.352307319641113f, 59.7625732421875f);
                }
                if(Button(OBFUSCATE("The First Magic Stone1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
                if(Button(OBFUSCATE("The First Magic Stone2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
                if(Button(OBFUSCATE("Purification Incense1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3900, 3.5f, 8.670000076293945f, 139.3000030517578f);
                }
                if(Button(OBFUSCATE("Purification Incense2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3600, 60.20000076293945f, 11.071170806884766f, 78.80000305175781f);
                }
                if(Button(OBFUSCATE("Purification Incense3"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(3100, 128.60000610351562f, 12.0f, 126.5f);
                }
                if(Button(OBFUSCATE("Purification Incense4"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4200, 94.27530670166016f, 20.654306411743164f, 173.9918670654297f);
                }
                if(Button(OBFUSCATE("The Dragon And Black Crystal1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4301, 120.54000091552734f, 41.7363395690918f, 188.33999633789062f);
                }
                if(Button(OBFUSCATE("The Dragon And Black Crystal2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4400, 53.330997467041016f, 53.175785064697266f, 73.93870544433594f);
                }
                if(Button(OBFUSCATE("The Dragon And Black Crystal3 END CHAPTER 1"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
            }
            if(CollapsingHeader(OBFUSCATE("Chapter 2")))  {
            if(Button(OBFUSCATE("chapter 2"), ImVec2(500.0f, 70.0f))) {
                    ChangeField(4600, 41.20000076293945f, 3.809999942779541f, 45.400001525878906f);
                }
            }

            EndTabItem();
        }
        EndTabBar();
    }
    End();
}

void SetupImgui() {
    IMGUI_CHECKVERSION();
    CreateContext();
    ImGuiIO &io = GetIO();
    io.DisplaySize = ImVec2((float) glWidth, (float) glHeight);
    ImGui_ImplOpenGL3_Init("#version 100");
    StyleColorsDark();
    ImGuiStyle* style = &ImGui::GetStyle();
    style->Alpha = 1.0;
    style->WindowRounding = 3;
    style->GrabRounding = 1;
    style->GrabMinSize = 20;
    style->FrameRounding = 3;

    style->Colors[ImGuiCol_Text] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.00f, 0.40f, 0.41f, 1.00f);
    style->Colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_Border] = ImVec4(0.00f, 1.00f, 1.00f, 0.65f);
    style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style->Colors[ImGuiCol_FrameBg] = ImVec4(0.44f, 0.80f, 0.80f, 0.18f);
    style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.44f, 0.80f, 0.80f, 0.27f);
    style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.44f, 0.81f, 0.86f, 0.66f);
    style->Colors[ImGuiCol_TitleBg] = ImVec4(0.14f, 0.18f, 0.21f, 0.73f);
    style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.54f);
    style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.27f);
    style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.20f);
    style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.22f, 0.29f, 0.30f, 0.71f);
    style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.44f);
    style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 1.00f, 1.00f, 0.68f);
    style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.36f);
    style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.76f);
    style->Colors[ImGuiCol_Button] = ImVec4(0.00f, 0.65f, 0.65f, 0.46f);
    style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.01f, 1.00f, 1.00f, 0.43f);
    style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.62f);
    style->Colors[ImGuiCol_Header] = ImVec4(0.00f, 1.00f, 1.00f, 0.33f);
    style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.42f);
    style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_PlotLines] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.00f, 1.00f, 1.00f, 0.22f);
    style->ScaleAllSizes(2.0f);
    GetStyle().ScaleAllSizes(7.0f);
    io.Fonts->AddFontFromMemoryTTF(Roboto_Regular, 30, 30.0f);
}


EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);

    if (!setupimg)
    {
        SetupImgui();
        setupimg = true;
    }

    ImGuiIO &io = GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    NewFrame();

    DrawMenu();

    EndFrame();
    Render();
    glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return old_eglSwapBuffers(dpy, surface);
}

#endif //ZYGISK_MENU_TEMPLATE_MENU_H
