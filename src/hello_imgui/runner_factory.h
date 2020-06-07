#pragma once
#include "hello_imgui/abstract_runner.h"
#include <memory>

namespace HelloImGui
{
#ifdef HELLOIMGUI_USE_GLFW
std::unique_ptr<AbstractRunner> FactorRunnerGlfw(RunnerParams & params);
#endif

#ifdef HELLOIMGUI_USE_SDL
std::unique_ptr<AbstractRunner> FactorRunnerSdl(RunnerParams & params);
#endif

#ifdef HELLOIMGUI_USE_QT
std::unique_ptr<AbstractRunner> FactorRunnerQt(RunnerParams & params);
#endif

#ifdef __EMSCRIPTEN__
std::unique_ptr<AbstractRunner> FactorRunnerEmscripten(RunnerParams & params);
#endif

std::unique_ptr<AbstractRunner> FactorRunner(RunnerParams & params);
}  // namespace HelloImGui