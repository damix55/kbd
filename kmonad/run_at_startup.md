```
[Unit]
Description=kmonad keyboard config

[Service]
Restart=always
RestartSec=3
ExecStart=/usr/local/bin/kmonad path/to/kmonad.kbd
Nice=-20

[Install]
WantedBy=default.target
```

* Place the provided service configuration in `/etc/systemd/system/kmonad.service`
* Reload Systemd: `sudo systemctl daemon-reload`
* Enable and Start the Service: `sudo systemctl start kmonad.service`