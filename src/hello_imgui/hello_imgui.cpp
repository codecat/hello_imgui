#include "hello_imgui/hello_imgui.h"
#include "hello_imgui/runner_factory.h"

namespace HelloImGui
{
    void Run(RunnerParams & runnerParams)
    {
        auto runner = FactorRunner(runnerParams);
        runner->params = runnerParams;
        runner->Run();
    }
}