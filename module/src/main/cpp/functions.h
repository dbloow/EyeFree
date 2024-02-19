#ifndef ZYCHEATS_SGUYS_FUNCTIONS_H
#define ZYCHEATS_SGUYS_FUNCTIONS_H

// here you can define variables for the patches
bool cGod, moved;

void(*orig_CharacterMove_Update)(void *instance);
void is_CharacterMove_Update(void *instance){
    if(instance != NULL) {
        if(moved) {
            *(float *)((uint64_t)instance + 0x34) = 1000.0f;
        }
    }
    return orig_CharacterMove_Update(instance);
}

void (*orig_set_EnableWallHit)(void *instance, bool value);
void is_set_EnableWallHit(void *instance, bool value)
{
    if (instance != NULL) {
        if(moved) {
            value = false;
        }
    }
    orig_set_EnableWallHit(instance, value);
}

void (*orig_set_IgnoreHeight)(void *instance, bool value);
void is_set_IgnoreHeight(void *instance, bool value)
{
    if (instance != NULL) {
        if(moved) {
            value = true;
        }
    }
    orig_set_IgnoreHeight(instance, value);
}

void (*Orig_changeField)(int fieldId, uint8_t roomType, uint8_t roomId, float* basePos, float angle, float cameraRot, void *emergency) = (void(*)(int, uint8_t, uint8_t, float[], float, float, void *))IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("GameManager"), OBFUSCATE("ChangeField"), 7);

void* gameManagerInstance = nullptr;

void (*Orig_GameManager_Update)(void *instance);
void is_GameManager_Update(void *instance){
    if (instance != nullptr) {
        gameManagerInstance = instance;
    }
}

void ChangeField(int fieldId) {
    if (gameManagerInstance != nullptr) {
        Orig_changeField(fieldId, 0, 0, NULL, 0, 0, NULL);
    }
}


bool (*old_godmod)(void *instance);
bool isGodMod(void *instance)
{
    if (instance != NULL) {
        if(cGod) {
            return true;
        }
    }
    return old_godmod(instance);
}

void Hooks() {
    IL2Cpp::Il2CppAttach();
    Tools::Hook((void *) (uintptr_t)IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("CharacterMove") , OBFUSCATE("set_EnableWallHit"), 1), (void *) is_set_EnableWallHit, (void **) &orig_set_EnableWallHit);
    Tools::Hook((void *) (uintptr_t)IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("CharacterMove") , OBFUSCATE("set_IgnoreHeight"), 1), (void *) is_set_IgnoreHeight, (void **) &orig_set_IgnoreHeight);
    Tools::Hook((void *) (uintptr_t)IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("CharacterMove") , OBFUSCATE("Update"), 0), (void *) is_CharacterMove_Update, (void **) &orig_CharacterMove_Update);
    Tools::Hook((void *) (uintptr_t)IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PlayerStatus") , OBFUSCATE("get_IsInvincibility"), 0), (void *) isGodMod, (void **) &old_godmod);
    Tools::Hook((void *) (uintptr_t)IL2Cpp::Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("GameManager") , OBFUSCATE("Update"), 0), (void *) is_GameManager_Update, (void **) &Orig_GameManager_Update);

}

#endif //ZYCHEATS_SGUYS_FUNCTIONS_H
