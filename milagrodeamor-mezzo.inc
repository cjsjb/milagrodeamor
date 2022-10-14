\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major

		R2*10  |
		r4 r8 e'  |
		e' 2  |
		r16 e' e' e' b' 16. a' gis' 16  |
		gis' 8 a' 16 a' ~ a' 4 ~  |
%% 15
		a' 4 r8 gis'  |
		a' 8. d' 16 ~ d' 4  |
		r16 d' d' e' fis' 8 e'  |
		b 8 ~ b b 16 cis' 8 b 16 ~  |
		b 4 r  |
%% 20
		r4 r8 cis' 16 ( fis' )  |
		fis' 8 ( e' ~ e' 4 )  |
		e' 8 fis' 16 fis' 4 ( e' 32 d'  |
		e' 4 ) r8 cis'  |
		d' 8. d' 16 ~ d' 8 d'  |
%% 25
		d' 8. d' 16 ~ d' 8 d'  |
		d' 8. d' 16 ~ d' 8 d'  |
		e' 4 ~ e'  |
		R2  |
		r2 r4 cis'  |
%% 30
		cis' 4. e' e' 4  |
		e' 4 d' 8 cis' 4 b b 8 ~  |
		b 8 cis' 2 r8 e' e'  |
		e' 4 e' 8 e' 4 gis' gis' 8 ~  |
		gis' 8 fis' 2 r8 d' d'  |
%% 35
		d' 4 d' 8 e' 4. fis' 4  |
		cis' 4 cis' 8 cis' 4. d' 4  |
		cis' 8 b 4 b 8 ~ b 2 ~  |
		b 2 r  |
		R1*2  |
		r4 r8 a' 4 gis' 8 fis' fis' ~  |
		fis' 8 e' 2 e' 4 fis' 8 ~  |
		fis' 8 a 2 r8 d' d'  |
		d' 4 d' 8 e' 4. fis' 4  |
%% 45
		cis' 8 d' 4 e' cis' b 8 ~  |
		b 1 ~  |
		b 2. r4  |
		R1*8  |
		cis' 1  |
		e' 1  |
		cis' 1  |
		b 1  |
%% 60
		d' 1  |
		d' 4. d' 4 d' cis' 8  |
		b 2. ( cis' 4 )  |
		b 2 r  |
		r2 r4 cis' 8 ( fis' )  |
%% 65
		fis' 4 ( e' ~ e' 2 )  |
		e' 4 ( fis' 8 ) fis' ( ~ fis' 4. e' 16 d'  |
		e' 2 ) r8 cis' cis' cis'  |
		d' 4. ~ d' d' 4  |
		d' 4. d' d' 4  |
%% 70
		d' 4 d' 8 d' 4. d' 4  |
		e' 4. e' ~ e' 4 ~  |
		e' 2 r4 cis'  |
		cis' 4. e' e' 4  |
		e' 4 d' 8 cis' 4 b b 8 ~  |
%% 75
		b 8 cis' 2 r8 e' e'  |
		e' 4 e' 8 e' 4 gis' gis' 8 ~  |
		gis' 8 fis' 2 r8 d' d'  |
		d' 4 d' 8 e' 4. fis' 4  |
		cis' 4 cis' 8 cis' 4. d' 4  |
%% 80
		cis' 8 b 4 b 8 ~ b 2 ~  |
		b 2 r  |
		R1*2  |
		r4 r8 a' 4 gis' 8 fis' fis' ~  |
%% 85
		fis' 8 e' 2 e' 4 fis' 8 ~  |
		fis' 8 a 2 r8 d' d'  |
		d' 4 d' 8 e' 4. fis' 4  |
		cis' 8 d' 4 e' cis' b 8 ~  |
		b 1 ~  |
%% 90
		b 2. r4  |
		fis' 4. d' fis' 4  |
		e' 2. r8 e'  |
		fis' 4. d' ( ~ d' 4  |
		e' 4 -\staccato ) r r cis'  |
%% 95
		cis' 4. e' fis' 4  |
		e' 2 r4 cis'  |
		cis' 4. e' fis' 4  |
		e' 2 r4 cis'  |
		cis' 4. e' fis' 4  |
%% 100
		e' 2. r4  |
		fis' 1  |
		e' 2. e' 4  |
		e' 1 ~  |
		e' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		% intro

		% estrofa 1
		Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		te pi -- do __ un po -- co más de "fe y" "de hu" -- mil -- dad. __

		% estrofa 2
		%Qui -- sie -- ra __ po -- der ser dig -- no de com -- par -- tir __
		Je __ sús... __
		"...com" -- par -- tir __
		con -- ti -- "go el" mi -- la -- gro __ más gran -- de __ "de a" -- mor. __

		% coro 1
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te has" he __ cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 2
		%Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		"...tan" in -- fi -- ni __ to...
		"...te ol" vi __ das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% estrofa 3
		%"Y hoy" ven -- go __ lle -- no de a -- le -- grí -- a __
		%a re -- ci -- bir -- te en es -- "ta eu" -- ca -- ris -- tí -- a.
		Uh, ah, uh, ah,
		uh, uh... "...eu" -- ca -- ris -- tí -- a.

		% estrofa 4
		%Te doy gra -- cias __ por lla -- mar -- "me a es" -- ta ce __ na, __
		Je __ sús... __
		"...ce" __ na, __
		por -- "que aun" -- que no __ soy dig -- no vi -- si -- tas Tú mi al -- ma. __

		% coro 3
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te has" he __ cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 4
		%Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		"...tan" in -- fi -- ni __ to...
		"...te ol" vi __ das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% puente
		Gra -- cias, Se -- ñor,
		por es -- ta... __

		% finale
		Mi -- la -- gro "de a" -- mor.
		Mi -- la -- gro "de a" -- mor.
		Mi -- la -- gro "de a" -- mor.
		Gra -- cias, Je -- sús. __
	}
>>
