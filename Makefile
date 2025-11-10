# ==========================
# Cross-platform Makefile
# For running C++ and Python projects
# ==========================

# Detect platform (Windows_NT = Windows, otherwise Linux/Mac)
ifeq ($(OS),Windows_NT)
    # --- Windows Settings ---
    PYTHON = .venv\Scripts\python.exe
    ACTIVATE = .venv\Scripts\activate
    RUN = ./
    EXE_EXT = .exe
else
    # --- Linux / Codespaces Settings ---
    PYTHON = .venv/bin/python
    ACTIVATE = source .venv/bin/activate
    RUN = ./
    EXE_EXT =
endif

# ==========================
# Commands
# ==========================

# Compile and run a C++ file
# Usage: make run-cpp file=path/to/file.cpp
run-cpp:
	@if [ "$(file)" = "" ]; then \
		echo "❌ Usage: make run-cpp file=path/to/file.cpp"; \
	else \
		echo "🚀 Compiling $(file)..."; \
		g++ $(file) -o $(basename $(file))$(EXE_EXT) && $(RUN)$(basename $(file))$(EXE_EXT); \
	fi

# Run a Python file using the virtual environment
# Usage: make run-py file=path/to/file.py
run-py:
	@if [ "$(file)" = "" ]; then \
		echo "❌ Usage: make run-py file=path/to/file.py"; \
	else \
		echo "🐍 Running $(file) using $(PYTHON)..."; \
		$(PYTHON) $(file); \
	fi

# Install Python dependencies (refresh environment)
install:
	@echo "📦 Installing dependencies..."
	$(PYTHON) -m pip install --upgrade pip setuptools wheel
	$(PYTHON) -m pip install -r requirements.txt
	@echo "✅ Dependencies installed."