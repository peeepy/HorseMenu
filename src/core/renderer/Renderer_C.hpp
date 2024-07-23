extern "C"
{
	__declspec(dllexport) bool Initialize_Renderer(void* swapChain, void* commandQueue, void* hwnd)
	{
		return YimMenu::Renderer::GetInstance().Initialize(swapChain, commandQueue, hwnd);
	}

	__declspec(dllexport) void Shutdown_Renderer()
	{
		YimMenu::Renderer::GetInstance().Shutdown();
	}
}