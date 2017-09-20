EXTRA_DIST += %D%/onboarding.xml %D%/onboarding.fo %D%/onboarding.pdf

AX_V_redirect = $(ax__v_redirect_$(V))
ax__v_redirect_ = $(ax__v_redirect_$(AM_DEFAULT_VERBOSITY))
ax__v_redirect_0 = >/dev/null 2>&1
ax__v_redirect_1 =

noinst_DATA = %D%/onboarding.pdf
%C%_onboarding_pdf_XSL = $(DOCBOOK_XSL)

%D%/onboarding.pdf: %D%/onboarding.fo
	$(AM_V_GEN)$(FOP) $< $@ $(AX_V_redirect)

%D%/onboarding.fo: %D%/onboarding.xml
	$(AM_V_GEN)$(XSLTPROC) -o $@ $(%C%_onboarding_pdf_XSL) $< $(AX_V_redirect)
