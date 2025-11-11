# **TUBIG MARKA NI SHANTIDOPE**

## **WORKFLOW SETUP & VIRTUAL ENVIRONMENT SETUP**
1. `python -m venv .venv`
2. `source .venv/bin/activate` (Codespace) / `.venv\Scripts\activate` (Windows)
3. `pip install -r requirements.txt`

## **Standard Dev Container (optional)**
1. Open in VS Code → “Reopen in Container”.

## **Adding libraries to requirements.txt**
1. Activate your virtual environment (if not already) `.venv\Scripts\activate`.
2. Install the libraries.
3. `pip freeze > requirements.txt` once again.

## **Updating requirements libraries.**
1. `pip install --upgrade -r requirements.txt`
2. `pip freeze > requirements.txt` once again.

## **RUNNING PROGRAMS USING MAKE**
- `make run-cpp file=<file-path>` for C++ Programs.
- `make run-py file=<file-path>` for Python Programs.

## **REINSTALLING DEPENDENCIES**
- `make install`