### **TUBIG MARKA NI SHANTIDOPE**

### WORKFLOW SETUP
1. python -m venv .venv
2. "source .venv/bin/activate" (Codespace) / ".venv\Scripts\activate" (Windows)
3. pip install -r requirements.txt

### VIRTUAL ENVIRONMENT SETUP
1. "python -m venv .venv"
2. Activate virtual environment: ".venv\Scripts\activate" for Windows, "source .venv/bin/activate" for Codespace.
3. Recreate dependencies by running "pip install -r requirements.txt"

### Updating requirements.txt
1. Activate your virtual environment (if not already) ".venv\Scripts\activate".
2. Install the libraries.
3. "pip freeze > requirements.txt" once again.

### Updating requirements libraries.
1. "pip install --upgrade -r requirements.txt"
2. "pip freeze > requirements.txt" once again.

### Dev Container
1. Open in VS Code → “Reopen in Container”.