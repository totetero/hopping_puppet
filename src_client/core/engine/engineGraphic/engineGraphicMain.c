#include "../../library.h"
#include "engineGraphic.h"

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// ----------------------------------------------------------------

// 3Dエンジン初期化処理
void engineGraphicGameInit(void){
	engineGraphicEngineInit();
	engineGraphicObjectReload();
}

// 3Dエンジン終了処理
void engineGraphicGameExit(void){
	engineGraphicBufferClean();
	engineGraphicObjectDispose();
	engineGraphicEngineExit();
}

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// ----------------------------------------------------------------

