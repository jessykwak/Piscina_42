cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | awk '{print $FT_LINE1 $FT_USER2}' | paste -sd ', ' | tr ',' ', ' | sed 's/$/./'| tr -d '\n'
