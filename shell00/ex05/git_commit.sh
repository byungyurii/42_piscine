#!/bin/bash

git log -5 --pretty=format:%H |
	sed 'H'
