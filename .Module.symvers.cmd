cmd_/opt/rtl8xxxu-mod/Module.symvers := sed 's/ko$$/o/' /opt/rtl8xxxu-mod/modules.order | scripts/mod/modpost -m -a   -o /opt/rtl8xxxu-mod/Module.symvers -e -i Module.symvers   -T -
