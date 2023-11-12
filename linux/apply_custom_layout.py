# This script will replace the colemak layout in the us file with the custom layout

import os
import shutil
import re
import sys

# read arguments
if len(sys.argv) != 2:
    input_file = 'colemak_custom'

else:
    input_file = sys.argv[1]
    

xkb_path = '/usr/share/X11/xkb/symbols'
backup_path = os.path.join(xkb_path, 'us_backup')
us_path = os.path.join(xkb_path, 'us')
custom_path = os.path.join(os.path.dirname(os.path.realpath(__file__)), 'colemak_custom.xkb')

# Check if backup exists, if not, create it
if not os.path.exists(backup_path):
    shutil.copy(us_path, backup_path)

# Read contents from the us and custom files
with open(us_path, 'r') as f_us, open(custom_path, 'r') as f_custom:
    us_content = f_us.read()
    custom_layout = f_custom.read()

# Replace content in the us file
us_content = re.sub('partial alphanumeric_keys\nxkb_symbols "colemak" {(.+?)include "level3\(ralt_switch\)"\n};', custom_layout, us_content, flags=re.DOTALL)

# Write the new content to the us file
with open(us_path, 'w') as f_us:
    f_us.write(us_content)