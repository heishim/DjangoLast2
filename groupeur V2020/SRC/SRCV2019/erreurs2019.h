#define IMPLEMENTATION 0
#define GROUPAGE 1
#define CONTROLE 2
#define MAXERRCTRL_2019 5000
#define MAXERRIMPL_2019 20
#define MAXERRARB_2019  5


extern int ErrCtrl_2019[MAXERRCTRL_2019+1];
extern int ErrArb_2019[MAXERRARB_2019+1];
extern int ErrImpl_2019[MAXERRIMPL_2019+1];


void InitErreur_2019(int ErrCtrl[],int ErrArb[],int ErrImpl[],int nbsej);
void AddErreur_2019(int FormatErr,int Erreur,int norum);



#define ERR_CONFIRMATIONNONNECESSAIRE_PRESENTE 124

#define ERR_AG_NONNUMERIQUE 125
#define ERR_AG_ABSENT 126
#define ERR_AG_INCOHERENT 127

#define ERR_POIDS_NBCARAC 128
#define ERR_AGPOIDS_INCOHERENT 129

#define ERR_DPO_AGE 130
#define ERR_DRO_AGE 131
#define ERR_DAO_AGE 132

#define ERR_DPP_AGE 133
#define ERR_DRP_AGE 134
#define ERR_DAP_AGE 135

/*supprim�es en v11d
#define ERR_DP_Z37 136
#define ERR_DR_Z37 137
#define ERR_DA_Z37 138

#define ERR_DP_Z38 139
#define ERR_DR_Z38 140
#define ERR_DA_Z38 141
*/

#define ERR_ACTEACC_OBLIGATOIRE 142
#define ERR_INCOMPATIB_DPMODSOR 143

/*FG 1311d*/
#define ERR_MOTIFSEANCE_SANSSEANCE_INCOHERENT 145 /*bloquant � partir de FG11e*/
#define ERR_NSEANCE_DUREESEJ_INCOHERENT 146 /*non bloquant */

#define ERR_INCOMPATIB_DP95 147 /*bloquant*/
#define ERR_INCOMPATIB_ACTE_SEXE 148 /*non bloquant*/
#define ERR_INCOMPATIB_ACTE_AGE 149  /*bloquant*/

/*FG supprim�e
#define ERR_NBFAISC_VALERR 144
*/
#define ERR_DPSEANCE_MULTIRUM 150

#define ERR_CONVHPHC_NONNUMERIQUE 151
#define ERR_CONVHPHC_CODEAOUIETUMHP 152
#define ERR_CONVHPHC_CONDITIONOKETANON 153
#define ERR_CONVHPHC_CONDITIONOKETAVIDE 154
/*#define ERR_UMHP_DUREESEJDIFFZERO 152
#define ERR_CONVHPHC_CODEAOUIETUMHP 153
#define ERR_CONVHPHC_CONDITIONOKETCODEE 224
#define ERR_CONVHPHC_CONDITIONOKETABSENTEOUANON 156
#define ERR_CONVHPHC_CONDITIONPASOKETAOUI 157*/


#define ERR_DATEDERNREGLES_NONNUMERIQUE 160
#define ERR_DATEDERNREGLES_INCOHERENTE 161
#define ERR_DATEDERNREGLES_ABSENTE 162
#define ERR_DATEDERNREGLES_DIFFERENTES 163

#define ERR_DATEDERNREGLES_SEXEINCOMPATIBLE 164
#define ERR_DATEDERNREGLES_SUPDATEENT 165
#define ERR_DATEDERNREGLES_TROPANCIENNE 166


#define ERR_ACTIVITEPRINCACTE_ABSENT 167

#define ERR_POIDS_REQUIS 168 /*bloquant*/

#define ERR_IGS_NONNUMERIQUE 169 /*FG11e : bloquant*/

#define ERR_ACTECCAM_ANESTH_EXTDOC_ABS 170

#define ERR_ACTECCAM_EXTDOC_ERRONEE 173 /*bloquant*/

#define ERR_AG_FAIBLE_ACCOUCHEMENT 174 /*bloquant*/

#define ERR_NBIVGANT_FORMAT             175 /*bloquant*/
#define ERR_ANNEEIVGPREC_FORMAT         176 /*bloquant*/
#define ERR_ANNEEIVGPREC_INCOHERENTE    177 /*bloquant*/
#define ERR_NBNAISSVIVANT_FORMAT        178 /*bloquant*/
#define ERR_IVG_SANS_ACTE               179 /*nouveaut� fg 2016 non bloquant*/

#define ERR_DP_EN_U 180 /*bloquant*/
#define ERR_DR_EN_U 181 /*bloquant*/
#define ERR_DA_EN_U 182 /*bloquant*/

#define ERR_CODE_POSTAL_NONRENSEIGNE 184 /*non bloquant*/

#define ERR_ACTECCAM_CODEDESC_FORMAT 185 /*bloquant*/
#define ERR_ACTECCAM_CODEDESC_ERRONEE 186 /*bloquant en 2017*/

#define ERR_DR_ATTENDU 187 /*bloquant*/

#define ERR_INDICRAAC_NONNUMERIQUE 188
#define ERR_INDICRAAC_MODESOR_INCOMPATIBLE 189

#define ERR_INCOMPATIB_AGEMODENTREEN 190
#define ERR_INCOMPATIB_DPMODENTREEN 191

#define ERR_ACTECCAM_CODEDESC_EXISTE_CODEEABLANC 192


