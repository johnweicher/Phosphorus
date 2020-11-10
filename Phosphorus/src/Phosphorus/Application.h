#pragma once

#include "Core.h"

namespace Phosphorus {

	class PHOSPHORUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();

	};

	// To be defined by client
	Application* CreateApplication();
}


