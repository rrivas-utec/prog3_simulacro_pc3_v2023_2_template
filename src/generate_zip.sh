#!/usr/bin/env bash

project_name='prog3_simulacro_pc3_v2023_2'
source_code='
        can_text_split.h
        nearest_spheres.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}