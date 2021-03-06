#ifndef WICKED_ENGINE
#define WICKED_ENGINE

// NOTE:
// The purpose of this file is to expose all engine features.
// It should be included in the engine's implementing project not the engine itself!
// It should be included in the precompiled header if available.

#include "CommonInclude.h"

#include "wiVersion.h"
#include "wiRenderTarget.h"
#include "wiDepthTarget.h"
#include "wiBackLog.h"
#include "wiFrustum.h"
#include "wiImageEffects.h"
#include "wiImage.h"
#include "wiSprite.h"
#include "wiFont.h"
#include "wiFrameRate.h"
#include "wiCpuInfo.h"
#include "wiSceneSystem.h"
#include "wiEmittedParticle.h"
#include "wiHairParticle.h"
#include "wiRenderer.h"
#include "wiDirectInput.h"
#include "wiXInput.h"
#include "wiRawInput.h"
#include "wiMath.h"
#include "wiLensFlare.h"
#include "wiSound.h"
#include "wiThreadSafeManager.h"
#include "wiResourceManager.h"
#include "wiTimer.h"
#include "wiHelper.h"
#include "wiInputManager.h"
#include "wiTextureHelper.h"
#include "wiRandom.h"
#include "wiColor.h"
#include "wiPhysicsEngine.h"
#include "wiEnums.h"
#include "wiInitializer.h"
#include "wiLua.h"
#include "wiLuna.h"
#include "wiGraphicsAPI.h"
#include "wiGUI.h"
#include "wiWidget.h"
#include "wiHashString.h"
#include "wiWindowRegistration.h"
#include "wiArchive.h"
#include "wiSpinLock.h"
#include "wiRectPacker.h"
#include "wiProfiler.h"
#include "wiOcean.h"
#include "wiStartupArguments.h"
#include "wiGPUBVH.h"
#include "wiGPUSortLib.h"

#include "RenderableComponent.h"
#include "Renderable2DComponent.h"
#include "Renderable3DComponent.h"
#include "ForwardRenderableComponent.h"
#include "DeferredRenderableComponent.h"
#include "TiledForwardRenderableComponent.h"
#include "TiledDeferredRenderableComponent.h"
#include "PathTracingRenderableComponent.h"
#include "LoadingScreenComponent.h"
#include "MainComponent.h"

#include "wiGraphicsDevice.h"

#ifdef _WIN32

#ifdef WINSTORE_SUPPORT
#pragma comment(lib,"WickedEngine_UWP.lib")
#else
#pragma comment(lib,"WickedEngine_Windows.lib")
#endif // WINSTORE_SUPPORT

#endif // _WIN32



#endif // WICKED_ENGINE
