# Dockerfile simplifié avec systemd
FROM fedora:latest

# Installer les dépendances nécessaires pour CSFML et VNC/XFCE
RUN dnf -y update && dnf install -y \
    gcc \
    make \
    CSFML-devel \
    tigervnc-server \
    xorg-x11-fonts-Type1 \
    xorg-x11-fonts-misc \
    dbus-x11 \
    xfwm4 \
    xfce4-panel \
    xfce4-session \
    xfce4-settings \
    xfdesktop \
    xfce4-terminal \
    thunar \
    systemd

# Configuration VNC via systemd
RUN systemctl enable vncserver@:1.service

# Copier le code source dans le conteneur
COPY . /src
WORKDIR /src

# Compiler le projet
RUN make

# Exposer le port VNC
EXPOSE 5901

# Commande de démarrage
CMD ["/usr/sbin/init"]




