<xml:stylesheet version="1.0">
<xsl:template match="/class">
<html>
	<body>
		<h2> Student Information</h2>
	<table>
		<tr>
			<th>Firstname</th>
			<th> Lastname</th>
		</tr>
		<tr>
			<td xsl:value-of select="firstname"/>
			<td xsl:value-of select="lastname"/>
		</tr>
	</table>
	</body>
</html>
</xsl:template>
</xsl:stylesheet>