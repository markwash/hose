#!/bin/bash
find "$(dirname $0)" -name '*.cc' -or -name '*.h' | xargs python cpplint.py
