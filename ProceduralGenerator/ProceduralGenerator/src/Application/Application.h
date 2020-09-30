#pragma once

#include <memory>
#include "Window/Window.h"
#include "Event/Event.h"
#include "Event/WindowsEvent.h"
#include "Layer/LayerStack.h"

class Application
{
protected:
	Window* m_window;
	bool m_is_running = true;
	LayerStack m_layer_stack;
	void OnEvent(Event& e);
	bool OnWindowClose(WindowCloseEvent& e);
	void OnTerminate();
public: 
	Application(const std::string_view name);
	virtual ~Application();
	void PushLayer(Layer* l);
	void PushOverlay(Layer* l);

	virtual void Run();

	static Application& Get();
	static Application* s_instance;

	Window* GetWindow() const { return m_window; }

	

};