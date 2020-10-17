#pragma once

//Standart library files
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <xkeycheck.h>
#include <unordered_map>
#include <cassert>

//Third-party library files
#include <glew/glew.h>
#include <glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


//Project files
#include "Graphics/Debug/GLDebug.h"
#include "Graphics/GFXPrimitives/VertexArray.h"
#include "Graphics/GFXPrimitives/Buffer.h"
#include "Graphics/GFXPrimitives/ShaderProgram.h"

#include "Logger/Logger.h"

#include "Application/Event/MouseEvent.h"
#include "Application/Event/WindowsEvent.h"
#include "Application/Layer/Layer.h"
#include "Application/Layer/LayerStack.h"